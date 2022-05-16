# Calculation of П using series aproximations

Support 4 series: Euler, Leibniz, Valise and ![formula](https://render.githubusercontent.com/render/math?math=\frac{1}{n^4})

## Euler
The Basel problem asks for the precise summation of the reciprocals of the squares of the natural numbers, i.e. the precise sum of the infinite series:
![formula](https://render.githubusercontent.com/render/math?math=\sum_{n=1}^{\infty}{\frac{1}{n^{2}}}={\frac{1}{1^{2}}}+{\frac{1}{2^{2}}}+{\frac{1}{3^{2}}}+\cdots=\frac{\pi^2}{6})

Solved by Euler, used by Taylor series expantion.

## Leibniz
In mathematics, the Leibniz formula for π, named after Gottfried Leibniz, states that

![formula](https://render.githubusercontent.com/render/math?math=1-{\frac{1}{3}}+{\frac{1}{5}}-{\frac{1}{7}}+{\frac{1}{9}}-\cdots={\frac{\pi}{4}})
an alternating series. It is also called the Madhava-Leibniz series as it is a special case of a more general series expansion for the inverse tangent function, first discovered by the Indian mathematician Madhava of Sangamagrama in the 14th century, the specific case first published by Leibniz around 1676. The series for the inverse tangent function, which is also known as Gregory's series, can be given by:


## Valise
In mathematics, the Wallis product for π, published in 1656 by John Wallis:
![formula](https://render.githubusercontent.com/render/math?math={\frac{\pi}{2}}=\prod_{n=1}^{\infty}{\frac{(2n)^{2}}{(2n-1)(2n+1)}}={\frac{2}{1}}\cdot{\frac{2}{3}}\cdot{\frac{4}{3}}\cdot{\frac{4}{5}}\cdot{\frac{6}{5}}\cdot{\frac{6}{7}}\cdot{\frac{8}{7}}\cdot{\frac{8}{9}}\cdot{\frac{10}{9}}\cdot{\frac{10}{11}}\cdot\ldots)

## Series ![formula](https://render.githubusercontent.com/render/math?math=\frac{1}{n^4})

![formula](https://render.githubusercontent.com/render/math?math=\sum_1^n \ \frac{1}{n^4} = \frac{\pi^4}{90})

The fastest coverage, but taking a fourth-degree root takes a lot of computer time
## Usage

```
calc_pi [n]
```

int n - number of iterations

## Results 
You can see withualiser code and interactive plots using [this](https://colab.research.google.com/drive/1HEcgK7cDQGLyNIlEcFTcWrih1RNJkyWi?usp=sharing) link

![plot1](/photos/plot1.png)
![plot1](/photos/plot2.png)
