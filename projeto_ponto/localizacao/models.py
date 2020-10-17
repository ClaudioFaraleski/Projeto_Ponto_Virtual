from django.db import models

class Localizacao(models.Model):
    local = models.CharField(max_length=100)
    rua = models.CharField(max_length=100)


