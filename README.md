# llwe
a unique, cursorless, light-weight text editor

## Quick command reference

    j/C-d        scroll down
    k/C-u        scroll up
    q            quit
    w            write file
    r            reload file
    i            insert
    a            append
    d            delete
    c            change
    g            goto line

## Cursorless editing

In a typical screen-oriented text editor, a cursor is used to indicate where 
editing operations will happen.  In `llwe`, there is no cursor.  Instead, each 
operation waits for a target.  For example, to insert text you would type 'i' 
for insert, and then specify a location to insert the text.  Typing a letter 
that appears on screen will start inserting text at that letter.  Frequently 
there is more than one matching letter on screen.  `llwe` will highlight all of 
the matches and label them a-z, to allow you to choose which one you intended.  
If there are a lot of matches, it might take more than one layer of relabeling 
to specify the correct one.  More than 2 layers is relatively rare, since you 
would need more than 600 of the same letter on your screen to require a third 
layer of disambiguation.

In practice, this works pretty well.  Instead of navigating the cursor around 
constantly, you can locate where you wish to edit with your eyes.  Then simply 
press the letter you're insterested in, and keep pressing the letters that pop 
up until the targeting is done.

## Drawbacks

I have no idea how macros / repetition could ever work with this.
