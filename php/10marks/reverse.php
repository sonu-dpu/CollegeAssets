<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $str = strtolower("Nitin");
    $rev = strrev($str);
    echo "original str $str <br>";
    echo "rev0 str $rev <br>";
    if ($str == $rev) {
        echo "<h1>$str is palindrome</h1>";
    } else {
        echo "<h1>$str is not a palindrome</h1>";
    }
    ?>
</body>

</html>