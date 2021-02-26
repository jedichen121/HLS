static double result_golden[] = {
    58240,       123777,      189314,      254851,      320388,
    385925,      451462,      516999,      582536,      648073,
    713610,      779147,      844684,      910221,      975758,
    1.0413e+06,  1.10683e+06, 1.17237e+06, 1.23791e+06, 1.30344e+06,
    1.36898e+06, 1.43452e+06, 1.50005e+06, 1.56559e+06, 1.63113e+06,
    1.69666e+06, 1.7622e+06,  1.82774e+06, 1.89328e+06, 1.95881e+06,
    2.02435e+06, 2.08989e+06, 2.15542e+06, 2.22096e+06, 2.2865e+06,
    2.35204e+06, 2.41757e+06, 2.48311e+06, 2.54865e+06, 2.61418e+06,
    2.67972e+06, 2.74526e+06, 2.81079e+06, 2.87633e+06, 2.94187e+06,
    3.0074e+06,  3.07294e+06, 3.13848e+06, 3.20402e+06, 3.26955e+06,
    3.33509e+06, 3.40063e+06, 3.46616e+06, 3.5317e+06,  3.59724e+06,
    3.66278e+06, 3.72831e+06, 3.79385e+06, 3.85939e+06, 3.92492e+06,
    3.99046e+06, 4.056e+06,   4.12153e+06, 4.18707e+06, 4.25261e+06,
    4.31814e+06, 4.38368e+06, 4.44922e+06, 4.51476e+06, 4.58029e+06,
    4.64583e+06, 4.71137e+06, 4.7769e+06,  4.84244e+06, 4.90798e+06,
    4.97352e+06, 5.03905e+06, 5.10459e+06, 5.17013e+06, 5.23566e+06,
    5.3012e+06,  5.36674e+06, 5.43227e+06, 5.49781e+06, 5.56335e+06,
    5.62888e+06, 5.69442e+06, 5.75996e+06, 5.8255e+06,  5.89103e+06,
    5.95657e+06, 6.02211e+06, 6.08764e+06, 6.15318e+06, 6.21872e+06,
    6.28426e+06, 6.34979e+06, 6.41533e+06, 6.48087e+06, 6.5464e+06,
    6.61194e+06, 6.67748e+06, 6.74301e+06, 6.80855e+06, 6.87409e+06,
    6.93962e+06, 7.00516e+06, 7.0707e+06,  7.13624e+06, 7.20177e+06,
    7.26731e+06, 7.33285e+06, 7.39838e+06, 7.46392e+06, 7.52946e+06,
    7.595e+06,   7.66053e+06, 7.72607e+06, 7.79161e+06, 7.85714e+06,
    7.92268e+06, 7.98822e+06, 8.05375e+06, 8.11929e+06, 8.18483e+06,
    8.25036e+06, 8.3159e+06,  8.38144e+06, 8.44698e+06, 8.51251e+06,
    8.57805e+06, 8.64359e+06, 8.70912e+06, 8.77466e+06, 8.8402e+06,
    8.90574e+06, 8.97127e+06, 9.03681e+06, 9.10235e+06, 9.16788e+06,
    9.23342e+06, 9.29896e+06, 9.36449e+06, 9.43003e+06, 9.49557e+06,
    9.5611e+06,  9.62664e+06, 9.69218e+06, 9.75772e+06, 9.82325e+06,
    9.88879e+06, 9.95433e+06, 1.00199e+07, 1.00854e+07, 1.01509e+07,
    1.02165e+07, 1.0282e+07,  1.03475e+07, 1.04131e+07, 1.04786e+07,
    1.05442e+07, 1.06097e+07, 1.06752e+07, 1.07408e+07, 1.08063e+07,
    1.08718e+07, 1.09374e+07, 1.10029e+07, 1.10685e+07, 1.1134e+07,
    1.11995e+07, 1.12651e+07, 1.13306e+07, 1.13961e+07, 1.14617e+07,
    1.15272e+07, 1.15928e+07, 1.16583e+07, 1.17238e+07, 1.17894e+07,
    1.18549e+07, 1.19204e+07, 1.1986e+07,  1.20515e+07, 1.2117e+07,
    1.21826e+07, 1.22481e+07, 1.23137e+07, 1.23792e+07, 1.24447e+07,
    1.25103e+07, 1.25758e+07, 1.26413e+07, 1.27069e+07, 1.27724e+07,
    1.2838e+07,  1.29035e+07, 1.2969e+07,  1.30346e+07, 1.31001e+07,
    1.31656e+07, 1.32312e+07, 1.32967e+07, 1.33623e+07, 1.34278e+07,
    1.34933e+07, 1.35589e+07, 1.36244e+07, 1.36899e+07, 1.37555e+07,
    1.3821e+07,  1.38865e+07, 1.39521e+07, 1.40176e+07, 1.40832e+07,
    1.41487e+07, 1.42142e+07, 1.42798e+07, 1.43453e+07, 1.44108e+07,
    1.44764e+07, 1.45419e+07, 1.46075e+07, 1.4673e+07,  1.47385e+07,
    1.48041e+07, 1.48696e+07, 1.49351e+07, 1.50007e+07, 1.50662e+07,
    1.51318e+07, 1.51973e+07, 1.52628e+07, 1.53284e+07, 1.53939e+07,
    1.54594e+07, 1.5525e+07,  1.55905e+07, 1.5656e+07,  1.57216e+07,
    1.57871e+07, 1.58527e+07, 1.59182e+07, 1.59837e+07, 1.60493e+07,
    1.61148e+07, 1.61803e+07, 1.62459e+07, 1.63114e+07, 1.6377e+07,
    1.64425e+07, 1.6508e+07,  1.65736e+07, 1.66391e+07, 1.67046e+07,
    1.67702e+07,
};
