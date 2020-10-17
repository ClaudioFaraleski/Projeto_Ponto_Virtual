from django.db import models

from onibus.models import Onibus
from horario.models import Horario

class Ponto(models.Model):
    parada = models.CharField(max_length=100)
    trajeto = models.CharField(max_length=150)
    onibus = models.ManyToManyField(Onibus)
    horario = models.ManyToManyField(Horario)


    def __str__(self):
        return self.parada
