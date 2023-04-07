from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def index(request):
    return render(request, 'main/index.html')

def projects(request):
    return HttpResponse("<h1>List of projects</h1>")

def about(request):
    return HttpResponse("<h1>About page</h1>")