<?php
function countVowels($str) {
    // Convert the string to lowercase to handle case insensitivity
    $str = strtolower($str);
    
    // Initialize vowel count and occurrences array
    $vowelCount = 0;
    $vowelOccurrences = [
        'a' => 0,
        'e' => 0,
        'i' => 0,
        'o' => 0,
        'u' => 0
    ];

    
    // Count vowels and their occurrences abcde
    for ($i = 0; $i < strlen($str); $i++) {
        $currentChar = $str[$i];
        if (isset($vowelOccurrences[$currentChar])) {
            $vowelOccurrences[$currentChar]++;
            $vowelCount++;
        }
    }
    
    return [$vowelCount, $vowelOccurrences];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $inputString = $_POST['inputString'];
    
    list($totalVowels, $vowelOccurrences) = countVowels($inputString);
    
    echo "<h1>Vowel Count Results</h1>";
    echo "<p>Total number of vowels: " . $totalVowels . "</p>";
    echo "<h2>Occurrences of each vowel:</h2>";
    echo "<ul>";
    foreach ($vowelOccurrences as $vowel => $count) {
        echo "<li>" . strtoupper($vowel) . ": " . $count . "</li>";
    }
    echo "</ul>";
}
?>