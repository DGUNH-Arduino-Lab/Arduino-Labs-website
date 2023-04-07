from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='Homepage'),
    path('projects', views.projects, name='Projects'),
    path('about', views.about, name='About'),
]
