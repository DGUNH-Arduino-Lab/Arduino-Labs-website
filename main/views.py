from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def index(request):
    return render(request, '')

def projects(request):
    return HttpResponse("<h1>List of projects</h1>")