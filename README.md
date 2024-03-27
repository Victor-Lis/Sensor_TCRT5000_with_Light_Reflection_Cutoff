# Sensor TCRT5000 with Light Reflection Cutoff

Esse projeto simples surgiu a partir de uma ideia para solucionar um problema no projeto [Sensor_TRT5000_e_Leds](https://github.com/Victor-Lis/Sensor-TCRT5000_e_Leds).

No projeto [Sensor_TRT5000_e_Leds](https://github.com/Victor-Lis/Sensor-TCRT5000_e_Leds) a detecção de movimento de objetos de cores escuras, especialmente preto não ocorre, já que funciona na base da reflexão de luz, ou seja, tons escuros que retem luz acabam não refletindo a luz necessária

Já nesse projeto o [Sensor_TCRT5000_with_Light_Reflection_Cutoff](https://github.com/Victor-Lis/Sensor_TCRT5000_with_Light_Reflection_Cutoff) funciona de maneira inversa, ele funciona no "corte de luz", ou seja a luz está sendo enviada constantemente, se algum objeto cortar essa luz será detectado movimento, sendo assim funciona perfeitamente com tons escuros e especialmente preto.

Infelizmente acaba não funcionando da maneira que seria necessário, já ele detecta movimento a partir do corte de luz, objetos que refletem luz acabam sendo "nulos", ou seja acaba só detectando objetos de tons escuros, sendo assim é o completo oposto do projeto [Sensor_TRT5000_e_Leds](https://github.com/Victor-Lis/Sensor-TCRT5000_e_Leds).

## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)
