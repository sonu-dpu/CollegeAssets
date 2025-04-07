<?php

$items = "";
$bill = array();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $items = $_POST['items'];
    $itemData = explode(",", $items);
    for ($i = 0; $i < count($itemData); $i += 4) {
        $itemCode = trim($itemData[$i]);
        $itemName = trim($itemData[$i + 1]);
        $unitsSold = (int) trim($itemData[$i + 2]);
        $rate = (float) trim($itemData[$i + 3]);
        $total = $unitsSold * $rate;

        $bill[] = array("itemCode" => $itemCode, "itemName" => $itemName, "unitsSold" => $unitsSold, "rate" => $rate, "total" => $total);
    }
}
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Item Bill</title>
</head>

<body>

    <h1>Enter Item Details</h1>
    <form method="POST">
        <label for="items">Enter 5 items details (item code, item name, units sold, rate):</label><br>
        <input type="text" name="items" id="items" size="80" placeholder="e.g. 001, Item1, 10, 25.5, 002, Item2, 5, 30.0, ..." required><br><br>
        <input type="submit" value="Generate Bill">
    </form>
    <h2>Bill Details</h2>
    <table border="1" cellpadding="10">
        <thead>
            <tr>
                <th>Item Code</th>
                <th>Item Name</th>
                <th>Units Sold</th>
                <th>Rate</th>
                <th>Total</th>
            </tr>
        </thead>
        <?php
        if (!empty($bill)) {
            foreach($bill as $item){
                $code=$item["itemCode"];
                $name=$item["itemName"];
                $sold=$item["unitsSold"];
                $price=$item["rate"];
                $amt=$sold*$price;
                echo "
                <tr>
                    <td>$code</td>
                    <td>$name</td>
                    <td>$sold</td>
                    <td>$price</td>
                    <td>$amt</td>
                </tr>
                ";
            }
        }
        ?>

    </table>

</body>

</html>