C $Header: /u/gcmpack/MITgcm/pkg/autodiff/checkpoint_lev1_directives.h,v 1.63 2016/09/12 19:59:10 mmazloff Exp $
C $Name:  $
c
c     store directives for checkpoint level 1
c
c     created: heimbach@mit.edu 10-Jan-2002
c

CADJ STORE totphihyd = comlev1,
CADJ &     key = ikey_dynamics, kind = isbyte
CADJ STORE phi0surf = comlev1,
CADJ &     key = ikey_dynamics, kind = isbyte
CADJ STORE saltflux = comlev1,
CADJ &     key = ikey_dynamics, kind = isbyte
#ifdef EXACT_CONSERV
CADJ STORE pmepr = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
#endif

#ifdef ALLOW_ADAMSBASHFORTH_3
CADJ STORE gtNm, gsNm   = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE guNm, gvNm   = comlev1, key = ikey_dynamics, kind = isbyte
#else
CADJ STORE gtNm1, gsNm1 = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE guNm1, gvNm1 = comlev1, key = ikey_dynamics, kind = isbyte
#endif

#ifdef NONLIN_FRSURF

CADJ STORE hFac_surfC    = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE hFac_surfW    = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE hFac_surfS    = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE hfac_surfNm1C = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE hfac_surfNm1W = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE hfac_surfNm1S = comlev1, key = ikey_dynamics, kind = isbyte

CADJ STORE theta, salt   = comlev1, key = ikey_dynamics,kind = isbyte
CADJ STORE uVel, vVel    = comlev1, key = ikey_dynamics,kind = isbyte
CADJ STORE surfaceForcingTice = comlev1,
CADJ &     key = ikey_dynamics,kind = isbyte

# ifndef DISABLE_RSTAR_CODE
CADJ STORE rstarfacc
CADJ &     = comlev1, key = ikey_dynamics, kind = isbyte
ccCADJ STORE rstarfacc,rstarfacs,rstarfacw
ccCADJ &     = comlev1, key = ikey_dynamics,
ccCADJ &     kind = isbyte
CADJ STORE rStarFacNm1C,rStarFacNm1S,rStarFacNm1W
CADJ &     = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE rstarexpc,rstarexps,rstarexpw
CADJ &     = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE rstardhcdt,rstardhsdt,rstardhwdt
CADJ &     = comlev1, key = ikey_dynamics, kind = isbyte
# endif

#else /* NONLIN_FRSURF */

CADJ STORE etaH = comlev1, key = ikey_dynamics, kind = isbyte
# if ( defined ALLOW_ECCO || defined ALLOW_SEAICE || defined ALLOW_DEPTH_CONTROL )
CADJ STORE theta, salt = comlev1, key = ikey_dynamics,kind = isbyte
# endif /* ALLOW_ECCO or ALLOW_SEAICE or ALLOW_DEPTH_CONTROL */
# if ( defined ALLOW_SEAICE || defined ALLOW_DEPTH_CONTROL )
CADJ STORE surfaceForcingTice = comlev1,
CADJ &     key = ikey_dynamics,kind = isbyte
# endif /* ALLOW_SEAICE or ALLOW_DEPTH_CONTROL */

#endif /* NONLIN_FRSURF */

#ifdef ALLOW_CD_CODE
# include "cd_code_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_GGL90
# include "ggl90_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_ECCO
# include "ecco_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_EXF
# include "exf_ad_check_lev1_dir.h"
#endif /* ALLOW_EXF undef */

#ifdef ALLOW_CTRL
# include "ctrl_ad_check_lev1_dir.h"
#endif

#ifndef EXCLUDE_FFIELDS_LOAD
# ifdef STORE_LOADEDREC_TEST
CADJ STORE loadedRec = comlev1, key = ikey_dynamics, kind = 4
#endif

CADJ STORE taux0   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE taux1   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE tauy0   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE tauy1   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE Qnet0   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE Qnet1   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE EmPmR0  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE EmPmR1  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE SST0    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE SST1    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE SSS0    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE SSS1    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE saltFlux0    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE saltFlux1    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
# ifdef SHORTWAVE_HEATING
CADJ STORE Qsw0    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE Qsw1    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
# endif
# ifdef ATMOSPHERIC_LOADING
CADJ STORE pload0  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE pload1  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
# endif
#endif  /* ndef EXCLUDE_FFIELDS_LOAD */

#ifdef ALLOW_OBCS
# include "obcs_ad_check_lev1_dir.h"
#endif  /* ALLOW_OBCS */

#ifdef ALLOW_SALT_PLUME
# include "salt_plume_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_SEAICE
# include "seaice_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_THSICE
# include "thsice_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_SHELFICE
# include "shelfice_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_RBCS
# include "rbcs_ad_check_lev1_dir.h"
#endif /* ALLOW_RBCS */

#ifdef ALLOW_OFFLINE
# include "offline_ad_check_lev1_dir.h"
#endif /* ALLOW_OFFLINE */

#ifdef ALLOW_PTRACERS
# include "ptracers_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_CFC
# include "cfc_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_DIC
# include "dic_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_BLING
# include "bling_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_GENERIC_ADVDIFF
# include "gad_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_EBM
CADJ STORE fu      = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE fv      = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE sss     = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE qnet    = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE qsw     = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE empmr   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE theta   = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
# include "ebm_ad_check_lev1_dir.h"
#endif

#ifdef ALLOW_COST
CADJ STORE cMeanThetaUVel = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE cMeanThetaVVel = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
#endif

#if (defined (ALLOW_COST_ATLANTIC) || defined (ALLOW_COST_ATLANTIC_HEAT))
CADJ STORE theta = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE uVel  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
CADJ STORE vVel  = comlev1, key = ikey_dynamics,
CADJ &     kind = isbyte
#endif

#ifdef ALLOW_SEAICE
# ifdef ALLOW_DOWN_SLOPE
CADJ STORE ETA, ZETA = comlev1, key = ikey_dynamics, kind = isbyte
# endif
C Note: code under option ALLOW_HFLUXM_CONTROL or ANNUAL_BALANCE is not
C       standard MITgcm code (-> untested and not maintained).
# ifdef ALLOW_HFLUXM_CONTROL
CADJ STORE qnetm      = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE eta,zeta   = comlev1, key = ikey_dynamics, kind = isbyte
# endif
# ifdef ANNUAL_BALANCE
CADJ STORE balance_itcount = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE atmfw_tilesum   = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE qnet_tilesum    = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE qnet_corr       = comlev1, key = ikey_dynamics, kind = isbyte
CADJ STORE empmr_corr      = comlev1, key = ikey_dynamics, kind = isbyte
# endif /* ANNUAL_BALANCE */
#endif
