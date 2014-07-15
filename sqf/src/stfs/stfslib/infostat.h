#ifndef STFS_INFOSTAT_H
#define STFS_INFOSTAT_H

///////////////////////////////////////////////////////////////////////////////
// 
///  \file    infostat.h
///  \brief   Header file for STFSinfo-stat-associated functionality
///    
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2008-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
///////////////////////////////////////////////////////////////////////////////

namespace STFS {

  /////////////////////////////////////
  /// function protototypes
  /////////////////////////////////////


  int STFSINFO_stat(stfs_nodeid_t     pv_Nid, 
                    char             *pp_Path, 
                    long             *pp_PrevIndex, 
                    stfs_statmask_t   pv_Mask, 
                    struct stfs_stat *pp_Buf);

  int STFSINFO_fstat(stfs_fhndl_t      pv_Fhandle,
                     stfs_statmask_t   pv_Mask,
                     struct stfs_stat *pp_Buf);

} //namespace STFS;

#endif // STFS_INFOSTAT_H