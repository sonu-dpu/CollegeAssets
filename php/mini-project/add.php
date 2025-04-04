<?php
include 'config.php';
if ($_SERVER["REQUEST_METHOD"] == "POST") {
 $name = $_POST['name'];
 $email = $_POST['email'];
 $phone = $_POST['phone'];
 $address = $_POST['address'];
 $sql = "INSERT INTO contacts (name, email, phone, address) VALUES ('$name', '$email', '$phone',
'$address')";

 if ($conn->query($sql) === TRUE) {
 header("Location: index.php");
 } else {
 echo "Error: " . $conn->error;
 }
}
?>