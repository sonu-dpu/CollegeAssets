<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<h1>Enter a number</h1>
    <form method="post">
        <label for="num">String:</label>
        <input type="text" id="num" name="num" required>
        <button type="submit">Submit</button>
    </form>

    <?php
        if(isset($_POST["num"])){
            $num = $_POST["num"];
            $sum = 0;
            for($i=0; $i<strlen($num); $i++){
                $sum += pow($num[$i], 3);
            }
            echo "Sum = $sum";
            if($sum==$num){
                echo "<h1>$num is armstrong number</h1>";
            }
        }
    ?>
</body>
</html>