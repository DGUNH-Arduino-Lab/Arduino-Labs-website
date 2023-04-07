from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def index(request):
    return render(request, 'main/index.html')

def projects(request):
    return render(request, 'main/projects.html')

def about(request):
    return render(request, 'main/about_us.html')