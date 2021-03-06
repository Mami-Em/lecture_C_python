from flask import Flask, render_template, request

app = Flask(__name__)

@app.route('/')
def main():
    return render_template('index.html')

@app.route('/<string:name>')
def hi(name):
    return f'Hi, {name.capitalize()}!'