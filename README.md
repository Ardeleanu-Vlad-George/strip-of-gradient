# Purpose
Very simple, just make a program that accepts two CLAs:
- the base color ('r' for red, 'b' for blue, 'g' for green)
- the name of the file (file extension not include)
The program uses the SFML library to generate an image that represents a gradient: from the minimal value for the stated color to the maximum
 one. This means the image will be 256 pixels wide.
The height of the image will be 50.
The color varies from left to right. The file extension is 'png'.
All of the generated gradients are saved inside the './data/' folder automatically.
Saving into custom locations isn't a consideration, neither are other file extensions, no other colors can be chosen.
No other direction for the color variation can be chosen.
No other value for the height can be chosen.
