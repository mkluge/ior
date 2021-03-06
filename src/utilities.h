/******************************************************************************\
*                                                                              *
*        Copyright (c) 2003, The Regents of the University of California       *
*      See the file COPYRIGHT for a complete copyright notice and license.     *
*                                                                              *
\******************************************************************************/

#ifndef _UTILITIES_H
#define _UTILITIES_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <mpi.h>

#include "ior.h"

char *CurrentTimeString(void);
void OutputToRoot(int, MPI_Comm, char *);
int Regex(char *, char *);
void ShowFileSystemSize(char *);
void DumpBuffer(void *, size_t);
IOR_offset_t StringToBytes(char *);
void SeedRandGen(MPI_Comm);
#if USE_UNDOC_OPT
void CorruptFile(char *, IOR_param_t *, int, int);
#endif
void SetHints (MPI_Info *, char *);
void ShowHints (MPI_Info *);

#endif  /* !_UTILITIES_H */
