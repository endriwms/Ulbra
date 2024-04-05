import 'package:tde05/account.dart';
import 'package:tde05/person.dart';
import 'package:tde05/person_constructor.dart';
import 'package:tde05/studant.dart';

void main() {
  // Uso do factory constructor para Pessoa
  var jsonPerson = {
    "name": "John Doe",
    "age": 30,
  };

  var person = Person.fromJson(jsonPerson);
  print('Pessoa: ${person.name} - ${person.age} anos');

  // Uso do factory constructor e método toJson para Conta
  var jsonAccount = {
    "balance": 100.0,
    "accountNumber": "123456",
  };

  var account = Account.fromJson(jsonAccount);
  print('Conta: ${account.balance} - ${account.accountNumber}');
  var accountToJson = account.toJson();
  print('Conta JSON: $accountToJson');

  // Uso do construtor padrão para Pessoa
  var personConst = const PersonConstructor(
    age: 30,
    name: 'John Doe',
    cpf: '12345678900',
  );

  print('PersonConst: ${personConst.name} - ${personConst.age} anos');

  // Uso da interface e Classe estudante
  var studant = Studant();

  studant.walk();
  studant.talk();
}
