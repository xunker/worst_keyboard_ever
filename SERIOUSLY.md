# Worst. Keyboard. Ever.

https://github.com/xunker/worst_keyboard_ever

# Serious answers

## Why?

These lever-style switches, even the cheap copies, have a really satisfying
action. So I found myself wondering what a keyboard made from these would feel
like.

I wanted to use larger SS-5GL/KW-11/KW-12 switches, but that made the board to
large and would cost too much to fab.

## Why is it "the worst"?

### No legends

There's no easy way to add legends.

Using masking tape or a label maker is the most obvious solution, but that's
more work than most people are prepared to do (after soldering 66 SMD diodes and
198 switch pins).

If I'd been more diligent in the PCB design, I would have made sure to have
silkscreens in the top-left corner of each unit, but I didn't know enough about
Kicad at the time (May 2022).

### Narrow key spacing

The key spacing is `2*(switch width)`, and that's too narrow for most people's
fingers.

I needed to keep the PCB under 100MM^2 in order to qualify for the cheap fab
options, and this was the best option.

### No "home row" bumps

Not that you'll be touch-typing on this, but even if you could there are no home
row bumps.

You could use a bit of glue to make a bump, I guess.

The best way would be to use D2F-L3/D2F-FL3 "simulated roller" switches in place
of "F" and "J", but I didn't think of that ahead of time.

### Fingers catch on levers

Your fingers will catch on the edge of the levers, and that really can't be
helped.

However, having the switches in the other orientation (levers pointing toward
the far-edge of the PCB) was **even worse**.

### Outboard MCU

When I make this PCB I had no idea what MCU I wanted to use. And even if I did,
that would have pushed the size past the $5 tier for PCB fabbing.

So I made the MCU connection completely outboard, via header connectors. It's
not a terrible thing to do, but I could have done better.

## Why it's not "the worst"

Despite the name, it does have some things going for it.

* It **is** a fully functional mechanical keyboard
* Small, very portable
* Fully compatible with QMK, ZMK, KMK, etc
* Great soldering practice

## Ideas for the future

### Use "simulated roller" switches

Use D2F-L3/D2F-FL3 "simulated roller" switches for "home row" bumps, and for
arrow keys. That would make it much easier to differntiate those keys.

### Align silkscreen legends better

Make sure the PCB legend silkscreens are aligned in the top-left corner, so they
are visible even when the switch is soldered in place.

### More switch placement options

Have more options for spacebar and arrow key locations.

Add options for ISO pipe and enter.

Add options for JIS pipe and backspace.

### RGB

Why not? To paraphrase Bill Hicks, "you're already within the Dark Lord's
domain."