sealed class Result {
  class Sucesso(val message: String): Result()
  class Error(val error: String): Result()
  object Loading : Result()
}