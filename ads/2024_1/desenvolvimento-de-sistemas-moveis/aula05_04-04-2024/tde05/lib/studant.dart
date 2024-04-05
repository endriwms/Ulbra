import 'package:tde05/interfaces/IPerson.dart';

class Studant implements IPerson {
  @override
  void walk() {
    print('Studant is walking');
  }

  @override
  void talk() {
    print('Studant is talking');
  }
}
