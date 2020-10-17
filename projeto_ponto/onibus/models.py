from django.db import models

class Onibus(models.Model):
    nome = models.CharField(max_length=100)
    linha = models.IntegerField()


    def __str__(self):
        return self.nome
