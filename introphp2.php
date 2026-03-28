<?php
    echo "<select name='ano'>";
    for ($i = 2026; $i >= 2000; $i--)  {
        echo "<option value='$i'> Ano $i</option>";
        }
    echo "</select>";
?>