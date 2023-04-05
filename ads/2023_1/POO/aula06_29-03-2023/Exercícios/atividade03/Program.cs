// Crie uma classe base chamada "Personagem" que tenha propriedades como "Nome", "Força", "Inteligência" e "Poderes". Em seguida, crie duas classes derivadas chamadas "Heroi" e "Vilao" que herdam da classe "Personagem" e implementam métodos para lutar. Além disso, crie duas classes adicionais chamadas "SuperHeroi" e "SuperVilao" que herdam de "Heroi" e "Vilao", respectivamente, e adicionam um novo método "SuperPoder()". Cada personagem deve ter valores diferentes para suas propriedades, como por exemplo "Homem de Ferro" com alta inteligência e "Thanos" com alta força. Os métodos de luta devem ser implementados de forma a levar em consideração as propriedades de cada personagem, e os métodos "SuperPoder()" devem ser implementados de forma a exibir a mensagem apropriada para cada personagem.      
using Aula06_herança_atividade03;
Personagem HomemDeFerro = new Heroi("Homem de Ferro", 50, 100, new string[] { "Armadura", "Inteligência" });
Personagem Thanos = new Vilao("Thanos", 100, 50, new string[] { "Força", "Poder das Joias" });
Personagem SuperMan = new SuperHeroi("Superman", 80, 90, new string[] { "Força", "Visão de calor" });
Personagem LexLuthor = new SuperVilao("Lex Luthor", 40, 100, new string[] { "Inteligência", "Riqueza" });

// Luta entre alguns personagens
HomemDeFerro.Lutar(Thanos); // Homem de Ferro vs Thanos
Console.WriteLine();

SuperMan.Lutar(LexLuthor); // Superman vs Lex Luthor
Console.WriteLine();
// Usando super poderes
((SuperHeroi)SuperMan).SuperPoder(); // Superman usando seu super poder
Console.WriteLine();