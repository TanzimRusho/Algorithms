<?php
// PHP program to find prime factorization
// of a number n in O(Log n) time with
// precomputation allowed.

$MAXN = 19999;

// stores smallest prime factor for
// every number
$spf = array_fill(0, $MAXN, 0);

// Calculating SPF (Smallest Prime Factor)
// for every number till MAXN.
// Time Complexity : O(nloglogn)
function sieve()
{
	global $MAXN, $spf;
	$spf[1] = 1;
	for ($i = 2; $i < $MAXN; $i++)

		// marking smallest prime factor
		// for every number to be itself.
		$spf[$i] = $i;

	// separately marking spf for every
	// even number as 2
	for ($i = 4; $i < $MAXN; $i += 2)
		$spf[$i] = 2;

	for ($i = 3; $i * $i < $MAXN; $i++)
	{
		// checking if i is prime
		if ($spf[$i] == $i)
		{
			// marking SPF for all numbers
			// divisible by i
			for ($j = $i * $i; $j < $MAXN; $j += $i)

				// marking spf[j] if it is not
				// previously marked
				if ($spf[$j] == $j)
					$spf[$j] = $i;
		}
	}
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
function getFactorization($x)
{
	global $spf;
	$ret = array();
	while ($x != 1)
	{
		array_push($ret, $spf[$x]);
		if($spf[$x])
		$x = (int)($x / $spf[$x]);
	}
	return $ret;
}

// Driver Code

// precalculating Smallest
// Prime Factor
sieve();
$x = 12246;
echo "prime factorization for " .
					$x . " : ";

// calling getFactorization function
$p = getFactorization($x);

for ($i = 0; $i < count($p); $i++)
	echo $p[$i] . " ";

// This code is contributed by mits
?>
