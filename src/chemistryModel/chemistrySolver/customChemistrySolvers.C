/*---------------------------------------------------------------------------*\
 =========                 |
 \\      /  F ield         | Code based on OpenFOAM
  \\    /   O peration     |
   \\  /    A nd           | Copyright (C) Adhiraj Dasgupta
    \\/     M anipulation  |                     
-------------------------------------------------------------------------------
 License
     This file is a derivative work of OpenFOAM.
     OpenFOAM is free software: you can redistribute it and/or modify it
     under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.
     OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
     ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
     FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
     for more details.
     You should have received a copy of the GNU General Public License
     along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "makeChemistrySolverTypes.H"
#include "QSS.H"
#include "thermoPhysicsTypes.H"
#include "psiChemistryModel.H"
#include "rhoChemistryModel.H"

namespace Foam
{
    makeChemistrySolverType
    (
        QSS,
        psiChemistryModel,
        gasHThermoPhysics
    );
    
    makeChemistrySolverType
    (
        QSS,
        rhoChemistryModel,
        gasHThermoPhysics
    );    
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
