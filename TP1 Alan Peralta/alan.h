#ifndef ALAN_H_INCLUDED
#define ALAN_H_INCLUDED

//ECHO POR ALAN PERALTA DNI:42872124
/** \brief Calcula el factoreo de un numero
 *
 * \param Primer entero a factoriar
 * \return Factorial
 *
 */
float factorialRecursiva(int num1);

/** \brief Calcula el factoreo de un numero
 *
 * \param segundo entero a factoriar
 * \return Factorial
 *
 */
float facRecur(int num2);

/** \brief Calcula la multiplicacion de dos enteros
 *
 * \param primer entero a multiplicar
 * \param segundo entero a multiplicar
 * \return resultado
 *
 */
int multiplicacion(int num1, int num2);

/** \brief Calcula la divicion de dos enteros
 *
 * \param primer entero a dividir
 * \param segundo entero a dividir
 * \return resultado en float
 *
 */
float divicion(int num1, int num2);

/** \brief  Se realiza la resta de dos enteros
 *
 * \param primer entero a restar
 * \param segundo entero a restar
 * \return resultado
 *
 */
int resta(int num1, int num2);

/** \brief Se realisa la suma de dos enteros
  *
  * \param primer entero a sumar
  * \param segundo entero a sumar
  * \return resultado
  *
  */
 int suma(int num1, int num2);

/** \brief Se realiza el menu de opciones y se agrega operandos x e y en el mensaje
   *
   * \param se pide la opcion
   * \return opcion
   *
   */
int menu();







#endif // ALAN_H_INCLUDED
