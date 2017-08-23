![alt text](Pong.png "Logo Title Text 1")

### Version: 0.4

### Controls

<table style="text-align: center;">
  <tr>
    <th></th>
    <th>Left Player</th>
    <th>Right Player</th>
  </tr>
  <tr>
    <th>Up</th>
    <td>W</td>
    <td>Up Arrow</td>
  </tr>
  <tr>
    <th>Down</th>
    <td>S</td>
    <td>Down Arrow</td>
  </tr> 
  <tr>
    <th>Pause</th>
    <td colspan="2">Esc</td>
  </tr>
  <tr>
    <th>Reset</th>
    <td colspan="2">R</td>
  </tr>
</table>

Menus are entirely mouse controlled.

<br>

### Summary

This is "Totally Original game not to too dissimilar to the 1972 classic, Pong". Or TOGNTTDTT1972CP for short...let's just call it Pong.

If you've lived under a rock for the last 45 years, Pong is a greatly simplified version of tennis. Your only objective is to get the ball past your opponent and off the opposite side of the screen, and to do it more often than your opponent.

There are both Singleplayer and Multiplayer modes, so you can play against an AI, against yourself or the guy you locked in the basement.

<br>

### Notes
* This game is optimized for 16:9 aspect ratios. While it should work on most aspect ratios, UI elements may overlap or be cut off by the windows with extreme ratios, especially on small screens.

<br>

### Update Summary

#### Version: {{page.version}}

This was much simpler than I thought it would be. The AI is still very simple, it simply follows the ball whenever it crosses into the right half of the screen. The difficulty simply sets how far away the ball is allowed to go before the paddle moves, I would like to improve this by having the lower difficulties make mistakes and maybe allowing higher difficulties to move even before the ball enters their side of the screen.

I also replaced the track buttons with a single left/right type selector, not only allowing room for the track name but effectively allowing potentially infinite tracks with no extra screen space being used.

<br>

### Planned updates
* Improved visuals (eg. backgrounds, more than two colours etc.)
* Tooltips when hovering over menu buttons
* Drop-down menu of preset resolutions for options page
* Fix bug where ball occasionally flies offscreen at high speed
* Add more gamemodes (Ie. AI, rotating paddles, multi-ball, timed, score-limit etc.)
* Lower default volumes
* Smoother/More random AI
* Keyboard controls for menus
* Fix hit audio pitch
* Start Compressing files to reduce overall size, at least with the WebGL version

<br>

### Permissions

If you're mad enough to want to use this product on your own site, you are welcome to. Just be nice enough to let me know and give credit.

The Pong Logo and the Posthumous Pixel logo and name are not trademarked but please don't be a d*ck. If you wish to use them let me know and don't pretend it's your own work.

<br>

### Credits

All assets used in this product are under Creative Commons, Public Domain or of my own creation.

"Voice Over Under", "Cyborg Ninja" and "Pixelland"<br>
Kevin MacLeod (<a href="https://incompetech.com/music/royalty-free/music.html">incompetech.com</a>)<br>
Licensed under Creative Commons: By Attribution 3.0
<a href="http://creativecommons.org/licenses/by/3.0/">
http://creativecommons.org/licenses/by/3.0/</a>

Other Audio clips were sourced from <a href="http://freesound.org/">freesound.org</a> and when I find the original clips I downloaded I will credit the specific artists.

The typeface used currently for all UI text elements (<a href="http://www.1001fonts.com/white-rabbit-font.html">White Rabbit</a> by Matthew Welch) is free for commercial use.

All custom visuals were made by me, that's why they're rubbish.

<br>

### Changelog

#### 0.4
* Replaced individual track buttons with left/right selector
* Added Classic Singleplayer, including AI
* Added Difficulty selector for singleplayer
* Corrected bug making ball always shoot left
* Corrected bug with persisting menus after unpausing

#### 0.3
* Added Splash/Initializer Scene
* Added Main menu and proper pause menu
* Added option menu with resolution and audio controls
* Added two alternative BGM tracks
* Replaced OnGUI elements with object based UI elements
* Hidden Fullscreen and quit-to-desktop buttons in WebGl mode

#### 0.25
* Fixed audio import settings, meaning it works in WebGL now
* WebGL player resolution optimized for this site
* UI elements now resize based on window size
* Audio migrated to new script

#### 0.2
* Paddles reset when button pressed
* Added toggle menu with: Pause/Play, Reset, Mute/Unmute and Quit Options
* Added countdown timer on serve
* Tidied up code with some extra comments
* Ball now starts at center (after slight delay)

#### 0.1
* Initial Release
<br><br>

