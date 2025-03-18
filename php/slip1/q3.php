<?php

function mergeArrays($array1, $array2) {
    return array_merge($array1, $array2);
}

function intersectArrays($array1, $array2) {
    return array_intersect_assoc($array1, $array2);
}

function unionArrays($array1, $array2) {
    return $array1 + $array2;
}

function differenceArrays($array1, $array2) {
    return array_diff_assoc($array1, $array2);
}

function displayMenu() {
    echo "Menu:\n";
    echo "1. Merge Arrays\n";
    echo "2. Intersection of Arrays\n";
    echo "3. Union of Arrays\n";
    echo "4. Set Difference of Arrays\n";
    echo "5. Exit\n";
    echo "Enter your choice: ";
}

$array1 = [
    "a" => "apple",
    "b" => "banana",
    "c" => "cherry"
];

$array2 = [
    "b" => "banana",
    "c" => "citrus",
    "d" => "date"
];

do {
    displayMenu();
    $choice = trim(fgets(STDIN));

    switch ($choice) {
        case 1:
            $result = mergeArrays($array1, $array2);
            echo "Merged Array:\n";
            print_r($result);
            break;
        case 2:
            $result = intersectArrays($array1, $array2);
            echo "Intersection of Arrays:\n";
            print_r($result);
            break;
        case 3:
            $result = unionArrays($array1, $array2);
            echo "Union of Arrays:\n";
            print_r($result);
            break;
        case 4:
            $result = differenceArrays($array1, $array2);
            echo "Set Difference of Arrays:\n";
            print_r($result);
            break;
        case 5:
            echo "Exiting...\n";
            break;
        default:
            echo "Invalid choice. Please try again.\n";
    }

    echo "\n";
} while ($choice != 5);

?>