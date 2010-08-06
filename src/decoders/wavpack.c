#include "wavpack.h"

/********************************************************
 Audio Tools, a module and set of tools for manipulating audio data
 Copyright (C) 2007-2010  Brian Langenberger

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*******************************************************/

int
WavPackDecoder_init(decoders_WavPackDecoder *self,
                    PyObject *args, PyObject *kwds) {
    return 0;
}

void
WavPackDecoder_dealloc(decoders_WavPackDecoder *self) {
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject*
WavPackDecoder_new(PyTypeObject *type,
                   PyObject *args, PyObject *kwds) {
    decoders_WavPackDecoder *self;

    self = (decoders_WavPackDecoder *)type->tp_alloc(type, 0);

    return (PyObject *)self;
}