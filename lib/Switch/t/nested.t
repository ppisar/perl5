#! /usr/local/bin/perl -w

BEGIN {
    chdir 't' if -d 't';
    @INC = '../lib';
}

use Switch;

print "1..4\n";

my $count = 1;
for my $count (1..3, 'four')
{
	switch ([$count])
	{
		case qr/\d/ {
				switch ($count) {
					case 1     { print "ok 1\n" }
					case [2,3] { print "ok $count\n" }
				}
			    }
		case 'four' { print "ok 4\n" }
	}
}
