<!DOCTYPE html>
<html lang="pt-br">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Conectar FreeStyle Libre - GlicNutri</title>
  <link rel="stylesheet" href="style.css" />
  <link rel="icon" href="GlicNutri2.png" type="image/png" />
  
   
</head>
<body>

  <h1>Conectar Sensor de Glicose</h1>
  <button id="connect-terra">Conectar FreeStyle Libre</button>

  <script>
    document.getElementById("connect-terra").onclick = function () {
      const devId = "SUA_DEV_ID"; // ✅ Substitua com seu dev_id da Terra
      const referenceId = "usuario123"; // ✅ ID único do usuário no seu app
      const authUrl = `https://widget.tryterra.co/terra-connect?dev_id=${devId}&reference_id=${referenceId}&providers=freestylelibre`;

      window.location.href = authUrl;
    };
  </script>

</body>
</html>
