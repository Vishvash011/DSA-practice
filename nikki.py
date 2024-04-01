import turtle

# Setup
window = turtle.Screen()
window.bgcolor("black")

pen = turtle.Turtle()
pen.speed(0)  # Set the fastest drawing speed
pen.color("red")

# Function to draw a heart shape
def draw_heart():
    pen.begin_fill()
    pen.left(140)
    pen.forward(224)
    for _ in range(200):
        pen.right(1)
        pen.forward(2)
    pen.left(120)
    for _ in range(200):
        pen.right(1)
        pen.forward(2)
    pen.forward(224)
    pen.end_fill()

# Write "Nikki I Love You" in the center of the heart
def write_text():
    pen.penup()
    pen.goto(-60, -20)
    pen.pendown()
    pen.color("white")
    pen.write("Nikki I Love You", font=("Arial", 12, "bold"))

# Draw the heart and write the text
draw_heart()
write_text()

# Hide the turtle
pen.hideturtle()

# Close the turtle graphics window on click
window.exitonclick()
