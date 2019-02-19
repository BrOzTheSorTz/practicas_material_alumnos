/**
 * @brief Implementaci�n de los m�todos de la clase Temazo
 * @file Temazo.cpp
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @date 12 de octubre de 2015, 17:08
 */
#include "Temazo.h"

/**
 * @brief Constructor parametrizado
 * @param titulo T�tulo del temazo
 * @param interprete Persona o grupo que lo interpreta
 * @param duracion Duraci�n en segundos
 * @param nombreUltimoGarito nombre del �ltimo garito en que se escuch�
 * @param fechaUltimoUso fecha en que se escuch� el temazo por �ltima vez
 * @post Crea un objeto de tipo Temazo con puntuaci�n a 0
 */
Temazo::Temazo ( std::string titulo, std::string interprete, int duracion,
                 std::string nombreUltimoGarito, Fecha fechaUltimoUso):
                    Temazo(titulo, interprete, duracion, nombreUltimoGarito,
                           fechaUltimoUso, 0)
{ }

/**
 * @brief Constructor parametrizado
 * @param titulo T�tulo del temazo
 * @param interprete Persona o grupo que lo interpreta
 * @param duracion Duraci�n en segundos
 * @param nombreUltimoGarito nombre del �ltimo garito en que se escuch�
 * @param fechaUltimoUso fecha en que se escuch� el temazo por �ltima vez
 * @param puntuacion Puntuaci�n otorgada por el p�blico
 * @post Crea un objeto de tipo Temazo
 */
Temazo::Temazo ( std::string titulo, std::string interprete, int duracion,
                 std::string nombreUltimoGarito, Fecha fechaUltimoUso,
                 int puntuacion ): _titulo(titulo), _interprete(interprete),
                                   _duracion(duracion),
                                   _nombreUltimoGarito (nombreUltimoGarito),
                                   _fechaUltimoUso (fechaUltimoUso),
                                   _puntuacion(puntuacion)
{ }

/**
 * @brief Constructor de copia de la clase
 * @param orig Objeto de tipo Temazo que se pasa para copiar sus datos
 * @post Crea un nuevo objeto por copia
 */

Temazo::Temazo ( const Temazo& orig ): _titulo(orig._titulo),
                                       _interprete(orig._interprete),
                                       _duracion(orig._duracion),
                                       _nombreUltimoGarito(orig._nombreUltimoGarito),
                                       _fechaUltimoUso(orig._fechaUltimoUso),
                                       _puntuacion(orig._puntuacion)
{ }

/**
 * @brief Destructor de clase
 * @post Destruye el objeto
 */
Temazo::~Temazo()
{ }


/**
 * @brief Devuelve la puntuaci�n del temazo
 * @post  Devuelve la puntuaci�n del temazo
 */
int Temazo::getPuntuacion() const {
    return _puntuacion;
}

/**
 * @brief Modifica la duraci�n del Temazo
 * @param duracion Nueva duraci�n
 * @post Modifica la duraci�n del Temazo
 */
void Temazo::setDuracion(int duracion) {
    this->_duracion = duracion;
}

/**
 * @brief Devuelve la duraci�n del temazo
 * @post  Devuelve la duraci�n del temazo
 */
int Temazo::getDuracion() const {
    return _duracion;
}

/**
 * @brief Modifica el int�rprete del Temazo
 * @param interprete Nuevo int�rprete
 * @post Modifica el int�rprete del Temazo
 */
void Temazo::setInterprete(std::string interprete) {
    this->_interprete = interprete;
}

/**
 * @brief Devuelve el int�rprete del temazo
 * @post  Devuelve el int�rprete del temazo
 */
std::string Temazo::getInterprete() const {
    return _interprete;
}

/**
 * @brief Modifica el t�tulo del Temazo
 * @param titulo Nuevo t�tulo
 * @post Modifica el t�tulo del Temazo
 */
void Temazo::setTitulo(std::string titulo) {
    this->_titulo = titulo;
}

/**
 * @brief Devuelve el t�tulo del temazo
 * @post  Devuelve el t�tulo del temazo
 */
std::string Temazo::getTitulo() const {
    return _titulo;
}

void Temazo::setNombreUltimoGarito ( std::string nombreUltimoGarito )
{
   this->_nombreUltimoGarito = nombreUltimoGarito;
}

std::string Temazo::getNombreUltimoGarito ( ) const
{
   return _nombreUltimoGarito;
}

void Temazo::setFechaUltimoUso ( const Fecha& fechaUltimoUso )
{
   this->_fechaUltimoUso = fechaUltimoUso;
}

Fecha Temazo::getFechaUltimoUso ( ) const
{
   return _fechaUltimoUso;
}

