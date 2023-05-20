using System;
using Atividade01;

// cria instâncias das classes que implementam a interface IPagamento
var cartaoCredito = new CartaoCredito();
var boleto = new Boleto();

// cria instâncias da classe Cliente e passa as instâncias de IPagamento para o construtor
var clienteCartaoCredito = new Cliente(cartaoCredito);
var clienteBoleto = new Cliente(boleto);

// realiza as compras chamando o método Comprar em cada instância de Cliente
clienteCartaoCredito.Comprar(50);
clienteBoleto.Comprar(100);

Console.ReadLine();