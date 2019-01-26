Day 4:
https://adventofcode.com/2018/day/4



You've sneaked into another supply closet - this time, it's across from the prototype suit manufacturing lab. You need to sneak inside and fix the issues with the suit, but there's a guard stationed outside the lab, so this is as close as you can safely get.

As you search the closet for anything that might help, you discover that you're not the first person to want to sneak in. Covering the walls, someone has spent an hour starting every midnight for the past few months secretly observing this guard post! They've been writing down the ID of the one guard on duty that night - the Elves seem to have decided that one guard was enough for the overnight shift - as well as when they fall asleep or wake up while at their post (your puzzle input).

For example, consider the following records, which have already been organized into chronological order:


[1518-11-01 00:00] Guard #10 begins shift

[1518-11-01 00:05] falls asleep

[1518-11-01 00:25] wakes up

[1518-11-01 00:30] falls asleep

[1518-11-01 00:55] wakes up

[1518-11-01 23:58] Guard #99 begins shift

[1518-11-02 00:40] falls asleep

[1518-11-02 00:50] wakes up

[1518-11-03 00:05] Guard #10 begins shift

[1518-11-03 00:24] falls asleep

[1518-11-03 00:29] wakes up

[1518-11-04 00:02] Guard #99 begins shift

[1518-11-04 00:36] falls asleep

[1518-11-04 00:46] wakes up

[1518-11-05 00:03] Guard #99 begins shift

[1518-11-05 00:45] falls asleep

[1518-11-05 00:55] wakes up



Timestamps are written using year-month-day hour:minute format. The guard falling asleep or waking up is always the one whose shift most recently started. Because all asleep/awake times are during the midnight hour (00:00 - 00:59), only the minute portion (00 - 59) is relevant for those events.





Strategy 1: Find the guard that has the most minutes asleep. 
What minute does that guard spend asleep the most?

In the example above, Guard #10 spent the most minutes asleep, a total of 50 minutes (20+25+5), 
while Guard #99 only slept for a total of 30 minutes (10+10+10). Guard #10 was asleep most 
during minute 24 (on two days, whereas any other minute the guard was asleep was only seen on one day).

While this example listed the entries in chronological order, your entries are in the order you found them. 
You'll need to organize them before they can be analyzed.







