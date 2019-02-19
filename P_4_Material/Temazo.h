/**
 * @file Temazo.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @desc Clase Temazo para las pr�cticas de POO
 * @date 12 de octubre de 2015, 17:08
 */

#ifndef TEMAZO_H
#define	TEMAZO_H

#include <string>
#include "Fecha.h"

/**
 @brief Clase que guarda los datos de un temazo
 */
class Temazo {
public:
    Temazo() = default;
    Temazo ( std::string titulo, std::string interprete, int duracion,
             std::string nombreUltimoGarito, Fecha fechaUltimoUso);
    Temazo ( std::string titulo, std::string interprete, int duracion,
             std::string nombreUltimoGarito, Fecha fechaUltimoUso,
             int puntuacion);
    Temazo(const Temazo& orig);
    virtual ~Temazo();
    int getPuntuacion() const;
    void setDuracion(int duracion);
    int getDuracion() const;
    void setInterprete(std::string interprete);
    std::string getInterprete() const;
    void setTitulo(std::string titulo);
    std::string getTitulo() const;
    void setNombreUltimoGarito ( std::string nombreUltimoGarito );
    std::string getNombreUltimoGarito ( ) const;
    void setFechaUltimoUso ( const Fecha& fechaUltimoUso );
    Fecha getFechaUltimoUso ( ) const;

private:
    std::string _titulo = ""; ///< T�tulo de la canci�n
    std::string _interprete = ""; ///< Int�rprete
    int _duracion = 0; ///< Duraci�n en segundos
    int _puntuacion = 0; ///< Puntuaci�n en funci�n de c�mo la acoge el p�blico
    std::string _nombreUltimoGarito = "";   ///< �ltimo garito en que se escuch�
    Fecha _fechaUltimoUso = Fecha();   ///< �ltimo d�a en que se escuch�
};

#endif	/* TEMAZO_H */

