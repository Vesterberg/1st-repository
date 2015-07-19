//=====================================================================================================================
//function: IsBoiling, checks if the water is boiling. bool = boolean = true or false = 1 or 0
//=====================================================================================================================

bool IsBoiling(int temperature)
{
    if (temperature < 100)
    {
        return false;
    }
    return true;
}

//=====================================================================================================================
//Function, CelciusToFahrenheit, converts its namesake
// Overlayer 1 - with int
//=====================================================================================================================

int CelciusToFahrenheit(int celcius)
{
    //PEMDAS fits so no parentheses are needed
    int fahrenheit = celcius * 9 / 5 + 32;
    return fahrenheit;
}

//=====================================================================================================================
//Overlayer 2 - with float
//=====================================================================================================================

float CelciusToFahrenheit(float celcius)
{
    //PEMDAS fits so no parentheses are needed
    float fahrenheit = celcius * 9 / 5 + 32;
    return fahrenheit;
}



