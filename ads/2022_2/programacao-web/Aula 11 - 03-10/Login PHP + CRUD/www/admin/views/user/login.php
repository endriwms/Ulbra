<!DOCTYPE html>
<html>
<head>
	<title>Área Administrativa</title>
	 <!-- Bootstrap CSS -->
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-alpha.6/css/bootstrap.min.css" integrity="sha384-rwoIResjU2yc3z8GV/NPeZWAv56rSmLldC3R/AZzGRnGxQQKnKkoFVhFQhNUwEyJ" crossorigin="anonymous">
	<link rel="stylesheet" href="assets/css/loginstyle.css"></link>
	<link rel="stylesheet" href="assets/css/animate.css"></link>
	<script src="https://code.jquery.com/jquery-3.1.1.slim.min.js" integrity="sha384-A7FZj7v+d/sdmMqp/nOQwliLvUsJfDHW+k9Omg/a/EheAdgtzNs3hpfag6Ed950n" crossorigin="anonymous"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/tether/1.4.0/js/tether.min.js" integrity="sha384-DztdAPBWPRXSA/3eYEEUWrWCy7G5KFbe8fFjk5JAIxUYHKkDx6Qin1DkWx51bBrb" crossorigin="anonymous"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0-alpha.6/js/bootstrap.min.js" integrity="sha384-vBWWzlZJ8ea9aCX4pEW3rVHjgjt7zpkNpZk+02D9phzyeVkE+jo0ieGizqPLForn" crossorigin="anonymous"></script>
</head>
	<body>
	<div class="container-fluid" >
		<div class="box">
			<form class="form" action="?controller=user&action=validateLogin" method=POST name="formulario" id="formulario">
				<h2>Área Administrativa</h2>
				<div class="inputBox">
					<input type="text" name="userName" required="required">
					<span>Username</span>
					<i></i>
				</div>

				<div class="inputBox">
					<input type="password" name="password" required="required">
					<span>Senha</span>
					<i></i>
				</div>

				<div class="links">
					<a href="#">Esqueci minha senha</a>
					<a href="../index.php">Página principal</a>
				</div>

				<input type="submit" name="Enviar" value="Login">
			</form>
		</div>
	</body>
</html>