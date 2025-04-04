<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
       $links = ["slip1"=>"./php/slip1", "slip2"=>"./slip2",];
       foreach($links as $name => $link){
        echo "<h1>$name</h1>";
        for($i = 1; $i<=3; $i++){
            echo "<a href='$link/q$i.php'>q$i.php</a><br>";
        }
        echo "<br>";
       }
     ?>
</body>
</html>