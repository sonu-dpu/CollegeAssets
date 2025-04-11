<?php
session_start();

if (!isset($_SESSION['stack'])) {
    $_SESSION['stack'] = array();
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    if (isset($_POST['push'])) {
        $val = $_POST['value'];
        array_push($_SESSION['stack'], $val);
    } elseif (isset($_POST['pop'])) {
        array_pop($_SESSION['stack']);
    }
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Simple Stack Program</title>
</head>
<body>
    <h2>Stack Operations</h2>
    <form method="post">
        Enter Value: <input type="text" name="value"><br><br>
        <input type="submit" name="push" value="Push">
        <input type="submit" name="pop" value="Pop">
    </form>

    <h3>Current Stack:</h3>
    <ul>
        <?php
        if (!empty($_SESSION['stack'])) {
            foreach (array_reverse($_SESSION['stack']) as $item) {
                echo "<li>$item</li>";
            }
        } else {
            echo "<li>Stack is empty</li>";
        }
        ?>
    </ul>
</body>
</html>
