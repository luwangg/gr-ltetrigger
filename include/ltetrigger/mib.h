/* -*- c++ -*- */
/*
 * Copyright 2016 Institute for Telecommunication Sciences.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_LTETRIGGER_MIB_H
#define INCLUDED_LTETRIGGER_MIB_H

#include <ltetrigger/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace ltetrigger {

    /*!
     * \brief <+description of block+>
     * \ingroup ltetrigger
     *
     */
    class LTETRIGGER_API mib : virtual public gr::block
    {
    public:
      typedef boost::shared_ptr<mib> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of ltetrigger::mib.
       *
       * To avoid accidental use of raw pointers, ltetrigger::mib's
       * constructor is in a private implementation
       * class. ltetrigger::mib::make is the public interface for
       * creating new instances.
       */
      static sptr make(bool exit_on_success=false);
    };

  } // namespace ltetrigger
} // namespace gr

#endif /* INCLUDED_LTETRIGGER_MIB_H */
