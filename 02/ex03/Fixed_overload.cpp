#include "Fixed.hpp"
#include <iostream>

Fixed &Fixed::operator=(const Fixed &clone) {
  std::cout << "Fixed copy assignment operator called\n";
  if (this != &clone)
    this->number_value = clone.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
  os << fixed.toFloat();
  return (os);
}

bool operator>(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() > rhs.getRawBits());
}

bool operator<(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() < rhs.getRawBits());
}

bool operator>=(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() >= rhs.getRawBits());
}

bool operator<=(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() <= rhs.getRawBits());
}

bool operator==(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() == rhs.getRawBits());
}

bool operator!=(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() != rhs.getRawBits());
}

Fixed operator+(Fixed const &lhs, Fixed const &rhs) {
  Fixed res;

  res.setRawBits((int)(lhs.getRawBits() + rhs.getRawBits()) >>
                 Fixed::getFractionalBits());
  return (res);
}

Fixed operator-(Fixed const &lhs, Fixed const &rhs) {
  Fixed res;

  res.setRawBits((lhs.getRawBits() - rhs.getRawBits()) >>
                 Fixed::getFractionalBits());
  return (res);
}

Fixed operator*(Fixed const &lhs, Fixed const &rhs) {
  Fixed res;

  res.setRawBits((int)(lhs.getRawBits() * rhs.getRawBits()) >>
                 Fixed::getFractionalBits());
  return (res);
  return (lhs.getRawBits() * rhs.getRawBits());
}

Fixed operator/(Fixed const &lhs, Fixed const &rhs) {
  Fixed res;

  res.setRawBits((int)(lhs.getRawBits() / rhs.getRawBits()) >>
                 Fixed::getFractionalBits());
  return (res);
}

Fixed &Fixed::operator++() {
  this->number_value += EPSILON;
  return (*this);
}

Fixed Fixed::operator++(int dummy_value) {
  (void)dummy_value;
  Fixed tmp = *this;
  this->number_value += EPSILON;
  return (tmp);
}

Fixed &Fixed::operator--() {
  this->number_value -= EPSILON;
  return (*this);
}

Fixed Fixed::operator--(int dummy_value) {
  (void)dummy_value;
  Fixed tmp = *this;
  this->number_value -= EPSILON;
  return (tmp);
}
