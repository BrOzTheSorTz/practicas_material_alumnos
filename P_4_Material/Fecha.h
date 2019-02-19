/**
 * @file Fecha.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @desc Clase Fecha para las pr�cticas de POO
 * @date 12 de octubre de 2015, 17:08
 */


#ifndef FECHA_H
#define	FECHA_H
/**
 * @brief Clase fecha
 */
class Fecha {
public:
    Fecha();
    Fecha( int dia, int mes, int anio);
    Fecha(const Fecha& orig);
    virtual ~Fecha();
    void setAnio(int anio);
    int getAnio() const;
    void setMes(int mes);
    int getMes() const;
    void setDia(int dia);
    int getDia() const;
    bool operator< ( const Fecha &otra );
    bool operator== ( const Fecha &otra );
    bool operator<= ( const Fecha &otra );
    bool operator>= ( const Fecha &otra );
    bool operator> ( const Fecha &otra );
    bool operator!= ( const Fecha &otra );
private:
    int _dia = 0; ///< Dia dentro de un mes
    int _mes = 0; ///< Mes dentro de un a�o
    int _anio = 0; ///< A�o de la fecha almacenada
};

#endif	/* FECHA_H */

