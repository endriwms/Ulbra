// Função para calcular a saída usando o Limite Rápido
function limiteRapido(input, weight) {
  const s = input * weight;
  return s <= 0 ? -1 : 1;
}

// Função para calcular a saída usando a Função Rampa
function funcaoRampa(input, weight) {
  const s = input * weight;
  return s < 0 ? 0 : s <= 1 ? s : 1;
}

// Função para calcular a saída usando a Função Sigmoide
function funcaoSigmoide(input, weight) {
  const s = input * weight;
  return s >= 0 ? 1 - 1 / (1 + s) : -1 + 1 / (1 - s);
}

// Função principal
function umComTres() {
  const entrada1 = parseFloat(prompt("Digite a entrada 1: "));
  const peso1 = parseFloat(prompt("Digite o peso 1: "));
  
  const entrada2 = parseFloat(prompt("Digite a entrada 2: "));
  const peso2 = parseFloat(prompt("Digite o peso 2: "));

  const entrada3 = parseFloat(prompt("Digite a entrada 3: "));
  const peso3 = parseFloat(prompt("Digite o peso 3: "));

  const funcaoEscolhida = prompt("Escolha a função (limite, rampa ou sigmoide): ").toLowerCase();

  let somaPonderada;

  if (funcaoEscolhida === "limite") {
      somaPonderada = limiteRapido((entrada1 * peso1) + (entrada2 * peso2) + (entrada3 * peso3), 1);
  } else if (funcaoEscolhida === "rampa") {
      somaPonderada = funcaoRampa((entrada1 * peso1) + (entrada2 * peso2) + (entrada3 * peso3), 1);
  } else if (funcaoEscolhida === "sigmoide") {
      somaPonderada = funcaoSigmoide((entrada1 * peso1) + (entrada2 * peso2) + (entrada3 * peso3), 1);
  } else {
      console.log("Função inválida. Escolha entre limite, rampa ou sigmoide.");
      return;
  }

  const saidaLimite = limiteRapido(somaPonderada, 1);
  const saidaRampa = funcaoRampa(somaPonderada, 1);
  const saidaSigmoide = funcaoSigmoide(somaPonderada, 1);

  console.log("Saída Limite: " + saidaLimite);
  console.log("Saída Rampa: " + saidaRampa);
  console.log("Saída Sigmoide: " + saidaSigmoide);
}

// Chama a função principal
// umComTres();

// Função principal
function doisDeUma() {
  const entrada_neuronio1 = parseFloat(prompt("Digite a entrada para o primeiro neurônio: "));
  const peso1_neuronio1 = parseFloat(prompt("Digite o peso 1 do primeiro neurônio: "));
  
  const peso1_neuronio2 = parseFloat(prompt("Digite o peso 1 do segundo neurônio: "));

  const funcaoEscolhida_neuronio1 = prompt("Escolha a função para o primeiro neurônio (limite, rampa ou sigmoide): ").toLowerCase();
  const funcaoEscolhida_neuronio2 = prompt("Escolha a função para o segundo neurônio (limite, rampa ou sigmoide): ").toLowerCase();

  let saida_neuronio1;
  let saida_neuronio2;

  if (funcaoEscolhida_neuronio1 === "limite") {
      saida_neuronio1 = limiteRapido(entrada_neuronio1, peso1_neuronio1);
  } else if (funcaoEscolhida_neuronio1 === "rampa") {
      saida_neuronio1 = funcaoRampa(entrada_neuronio1, peso1_neuronio1);
  } else if (funcaoEscolhida_neuronio1 === "sigmoide") {
      saida_neuronio1 = funcaoSigmoide(entrada_neuronio1, peso1_neuronio1);
  } else {
      console.log("Função inválida. Escolha entre limite, rampa ou sigmoide.");
      return;
  }

  if (funcaoEscolhida_neuronio2 === "limite") {
      saida_neuronio2 = limiteRapido(saida_neuronio1, peso1_neuronio2);
  } else if (funcaoEscolhida_neuronio2 === "rampa") {
      saida_neuronio2 = funcaoRampa(saida_neuronio1, peso1_neuronio2);
  } else if (funcaoEscolhida_neuronio2 === "sigmoide") {
      saida_neuronio2 = funcaoSigmoide(saida_neuronio1, peso1_neuronio2);
  } else {
      console.log("Função inválida. Escolha entre limite, rampa ou sigmoide.");
      return;
  }

  console.log("Saída do primeiro neurônio (Limite): " + limiteRapido(entrada_neuronio1, peso1_neuronio1));
  console.log("Saída do primeiro neurônio (Rampa): " + funcaoRampa(entrada_neuronio1, peso1_neuronio1));
  console.log("Saída do primeiro neurônio (Sigmoide): " + funcaoSigmoide(entrada_neuronio1, peso1_neuronio1));
  
  console.log("Saída do segundo neurônio (Limite): " + limiteRapido(saida_neuronio1, peso1_neuronio2));
  console.log("Saída do segundo neurônio (Rampa): " + funcaoRampa(saida_neuronio1, peso1_neuronio2));
  console.log("Saída do segundo neurônio (Sigmoide): " + funcaoSigmoide(saida_neuronio1, peso1_neuronio2));
}



function redeBifurcada() {
  const entrada1 = parseFloat(prompt("Digite a entrada 1: "));
  const peso1 = parseFloat(prompt("Digite o peso 1: "));

  const funcaoEscolhida = prompt("Escolha a função (limite, rampa ou sigmoide): ").toLowerCase();

  const resultadoNeuronio1 = funcaoEscolhida === "limite" ? limiteRapido(entrada1 * peso1, 1) :
                            funcaoEscolhida === "rampa" ? funcaoRampa(entrada1 * peso1, 1) :
                            funcaoEscolhida === "sigmoide" ? funcaoSigmoide(entrada1 * peso1, 1) : null;

  const peso2 = parseFloat(prompt("Digite o peso 2: "));

  const resultadoNeuronio2 = funcaoEscolhida === "limite" ? limiteRapido(resultadoNeuronio1 * peso2, 1) :
                            funcaoEscolhida === "rampa" ? funcaoRampa(resultadoNeuronio1 * peso2, 1) :
                            funcaoEscolhida === "sigmoide" ? funcaoSigmoide(resultadoNeuronio1 * peso2, 1) : null;

  const peso3 = parseFloat(prompt("Digite o peso 3: "));

  const resultadoNeuronio3 = funcaoEscolhida === "limite" ? limiteRapido(entrada1 * peso3, 1) :
                            funcaoEscolhida === "rampa" ? funcaoRampa(entrada1 * peso3, 1) :
                            funcaoEscolhida === "sigmoide" ? funcaoSigmoide(entrada1 * peso3, 1) : null;

  console.log("Saída do neurônio 1 (Limite): " + limiteRapido(entrada1 * peso1, 1));
  console.log("Saída do neurônio 1 (Rampa): " + funcaoRampa(entrada1 * peso1, 1));
  console.log("Saída do neurônio 1 (Sigmoide): " + funcaoSigmoide(entrada1 * peso1, 1));

  console.log("Saída do neurônio 2 (Limite): " + limiteRapido(resultadoNeuronio1 * peso2, 1));
  console.log("Saída do neurônio 2 (Rampa): " + funcaoRampa(resultadoNeuronio1 * peso2, 1));
  console.log("Saída do neurônio 2 (Sigmoide): " + funcaoSigmoide(resultadoNeuronio1 * peso2, 1));

  console.log("Saída do neurônio 3 (Limite): " + limiteRapido(entrada1 * peso3, 1));
  console.log("Saída do neurônio 3 (Rampa): " + funcaoRampa(entrada1 * peso3, 1));
  console.log("Saída do neurônio 3 (Sigmoide): " + funcaoSigmoide(entrada1 * peso3, 1));
}

function calcularSaidaNeuronio(entrada, peso, funcaoEscolhida) {
  return funcaoEscolhida === "limite" ? limiteRapido(entrada * peso, 1) :
         funcaoEscolhida === "rampa" ? funcaoRampa(entrada * peso, 1) :
         funcaoEscolhida === "sigmoide" ? funcaoSigmoide(entrada * peso, 1) : null;
}

function redeNeural() {
  const numCamadas = parseInt(prompt("Digite o número de camadas: "));
  const funcaoEscolhida = prompt("Escolha a função (limite, rampa ou sigmoide): ").toLowerCase();

  const camadas = [];

  for (let i = 0; i < numCamadas; i++) {
    const numNeuronios = parseInt(prompt(`Digite o número de neurônios na camada ${i + 1}: `));
    const pesos = [];

    for (let j = 0; j < numNeuronios; j++) {
      pesos.push(parseFloat(prompt(`Digite o peso para o neurônio ${j + 1} na camada ${i + 1}: `)));
    }

    camadas.push({ numNeuronios, pesos });
  }

  const resultados = [];

  for (let i = 0; i < camadas.length; i++) {
    const camadaAtual = camadas[i];
    const resultadosCamada = [];

    for (let j = 0; j < camadaAtual.numNeuronios; j++) {
      let entradaNeuronio = 0;

      if (i === 0) {
        entradaNeuronio = parseFloat(prompt(`Digite a entrada para o neurônio ${j + 1} na camada ${i + 1}: `));
      } else {
        entradaNeuronio = resultados[i - 1][j];
      }

      const pesoNeuronio = camadaAtual.pesos[j];
      const saidaNeuronio = calcularSaidaNeuronio(entradaNeuronio, pesoNeuronio, funcaoEscolhida);
      resultadosCamada.push(saidaNeuronio);
    }

    resultados.push(resultadosCamada);
  }

  for (let i = 0; i < resultados.length; i++) {
    const camadaAtual = resultados[i];
    for (let j = 0; j < camadaAtual.length; j++) {
      console.log(`Saída da camada ${i + 1}, neurônio ${j + 1} (${funcaoEscolhida}): ` + camadaAtual[j]);
    }
  }
}