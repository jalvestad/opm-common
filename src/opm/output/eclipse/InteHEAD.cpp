#include <opm/output/eclipse/InteHEAD.hpp>

#include <utility>
#include <vector>

enum index : std::vector<int>::size_type {
INTEHEAD_ISNUM_VALUE	=	0	,		//	0	An encoded integer corresponding to the time the file was created. For files not originating from ECLIPSE, this value may be set to zero.
INTEHEAD_METRIC_VALUE	=	1	,		//	0
INTEHEAD_UNIT_INDEX	=	2	,		//	(1,2,3)	units type: 1 - METRIC, 2 - FIELD, 3 - LAB
intehead_3	=	3	,		//
intehead_4	=	4	,		//
intehead_5	=	5	,		//
intehead_6	=	6	,		//
intehead_7	=	7	,		//
INTEHEAD_NX_INDEX	=	8	,		//	NX	Grid x-direction dimension, NX
INTEHEAD_NY_INDEX	=	9	,		//	NY	Grid x-direction dimension, NY
INTEHEAD_NZ_INDEX	=	10	,		//	NZ	Grid x-direction dimension, NZ
INTEHEAD_NACTIV_INDEX	=	11	,		//	NACTIV?	NACTIV = number of active cells
intehead_12	=	12	,		//
intehead_13	=	13	,		//
INTEHEAD_PHASE_INDEX	=	14	,		//	(1 - 7)	IPHS = phase indicator: 1 - oil, 2 - water, 3 - oil/water, 4 - gas, 5 – oil/gas, 6 - gas/water, 7 - oil/water/gas (ECLIPSE output only)
intehead_15	=	15	,		//
INTEHEAD_NWELLS_INDEX	=	16	,		//	NWELLS	NWELL = number of wells
INTEHEAD_NCWMAX_INDEX	=	17	,		//	NCWMAX	NCWMAX = maximum number of completions per well
intehead_18	=	18	,		//
INTEHEAD_NWGMAX_INDEX	=	19	,		//	NWGMAX	NWGMAX = maximum number of wells in any well group
INTEHEAD_NGMAXZ_INDEX	=	20	,		//	NGMAXZ	NGMAXZ = maximum number of groups in field
intehead_21	=	21	,		//
intehead_22	=	22	,		//
intehead_23	=	23	,		//
INTEHEAD_NIWELZ_INDEX	=	24	,		//	NIWELZ	NIWELZ = no of data elements per well in IWEL array (default 97 for ECLIPSE, 94 for ECLIPSE 300)
INTEHEAD_NSWELZ_INDEX	=	25	,		//		NSWELZ = number of daelements per well in SWEL array
INTEHEAD_NXWELZ_INDEX	=	26	,		//		NXWELZ = number of delements per well in XWEL array
INTEHEAD_NZWELZ_INDEX	=	27	,		//		NZWEL = no of 8-character words per well in ZWEL array (= 3)
intehead_28	=	28	,		//
intehead_29	=	29	,		//
intehead_30	=	30	,		//
intehead_31	=	31	,		//
INTEHEAD_NICONZ_INDEX	=	32	,		//		NICON = no of data elements per completion in ICON array (default 19)
INTEHEAD_NSCONZ_INDEX	=	33	,		//		NSCONZ = number of data elements per completion in SCON array
INTEHEAD_NXCONZ_INDEX	=	34	,		//		NXCONZ = number of data elements per completion in XCON array
intehead_33	=	35	,		//
INTEHEAD_NIGRPZ_INDEX	=	36	,		//		NIGRPZ = no of data elements per group in IGRP array
INTEHEAD_NSGRPZ_INDEX	=	37	,		//		NSGRPZ = number of data elements per group in SGRP array
INTEHEAD_NXGRPZ_INDEX	=	38	,		//		NXGRPZ = number of data elements per group in XGRP array
INTEHEAD_NZGRPZ_INDEX	=	39	,		//		NZGRPZ = number of data elements per group in ZGRP array
intehead_40	=	40	,		//
INTEHEAD_NCAMAX_INDEX	=	41	,		//		NCAMAX = maximum number of analytic aquifer connections
INTEHEAD_NIAAQZ_INDEX	=	42	,		//		NIAAQZ = number of data elements per aquifer in IAAQ array
INTEHEAD_NSAAQZ_INDEX	=	43	,		//		NSAAQZ = number of data elements per aquifer in SAAQ array
INTEHEAD_NXAAQZ_INDEX	=	44	,		//		NXAAQZ = number of data elements per aquifer in XAAQ array
INTEHEAD_NICAQZ_INDEX	=	45	,		//		NSCAQZ= number of data elements per aquifer connection in SCAQ array
INTEHEAD_NSCAQZ_INDEX	=	46	,		//
INTEHEAD_NACAQZ_INDEX	=	47	,		//
intehead_48	=	48	,		//
intehead_49	=	49	,		//
intehead_50	=	50	,		//
intehead_51	=	51	,		//
intehead_52	=	52	,		//
intehead_53	=	53	,		//
intehead_54	=	54	,		//
intehead_55	=	55	,		//
intehead_56	=	56	,		//
intehead_57	=	57	,		//
intehead_58	=	58	,		//
intehead_59	=	59	,		//
intehead_60	=	60	,		//
intehead_61	=	61	,		//
intehead_62	=	62	,		//
intehead_63	=	63	,		//
INTEHEAD_DAY_INDEX	=	64	,		//		IDAY = calendar day at this report time
INTEHEAD_MONTH_INDEX	=	65	,		//		IMON = calendar month at this report time
INTEHEAD_YEAR_INDEX	=	66	,		//		IYEAR = calendar year at this report time
INTEHEAD_TIMESTEP_INDEX	=	67	,		//
INTEHEAD_REPORT_STEP	=	68	,		//
intehead_69	=	69	,		//
intehead_70	=	70	,		//
intehead_71	=	71	,		//
intehead_72	=	72	,		//
intehead_73	=	73	,		//
intehead_74	=	74	,		//
intehead_75	=	75	,		//
intehead_76	=	76	,		//
intehead_77	=	77	,		//
intehead_78	=	78	,		//
intehead_79	=	79	,		//
intehead_80	=	80	,		//
intehead_81	=	81	,		//
intehead_82	=	82	,		//
intehead_83	=	83	,		//
intehead_84	=	84	,		//
intehead_85	=	85	,		//
intehead_86	=	86	,		//
intehead_87	=	87	,		//
intehead_88	=	88	,		//
intehead_89	=	89	,		//
intehead_90	=	90	,		//
intehead_91	=	91	,		//
intehead_92	=	92	,		//
intehead_93	=	93	,		//
INTEHEAD_IPROG_INDEX	=	94	,		//		IPROG = simulation program identifier:  100 - ECLIPSE 100, 300 - ECLIPSE 300, 500 - ECLIPSE 300 (thermal option), negative - Other simulator
INTEHEAD_INIT_SIZE	=	95	,		//
intehead_96	=	96	,		//
intehead_97	=	97	,		//
intehead_98	=	98	,		//
intehead_99	=	99	,		//
intehead_100	=	100	,		//
intehead_101	=	101	,		//
intehead_102	=	102	,		//
intehead_103	=	103	,		//
intehead_104	=	104	,		//
intehead_105	=	105	,		//
intehead_106	=	106	,		//
intehead_107	=	107	,		//
intehead_108	=	108	,		//
intehead_109	=	109	,		//
intehead_110	=	110	,		//
intehead_111	=	111	,		//
intehead_112	=	112	,		//
intehead_113	=	113	,		//
intehead_114	=	114	,		//
intehead_115	=	115	,		//
intehead_116	=	116	,		//
intehead_117	=	117	,		//
intehead_118	=	118	,		//
intehead_119	=	119	,		//
intehead_120	=	120	,		//
intehead_121	=	121	,		//
intehead_122	=	122	,		//
intehead_123	=	123	,		//
intehead_124	=	124	,		//
intehead_125	=	125	,		//
intehead_126	=	126	,		//
intehead_127	=	127	,		//
intehead_128	=	128	,		//
intehead_129	=	129	,		//
intehead_130	=	130	,		//
INTEHEAD_NODMAX_INDEX	=	131	,		//		NODMAX = maximum number of nodes in extended network option
INTEHEAD_NBRMAX_INDEX	=	132	,		//		NBRMAX = maximum number of branches in extended network option
INTEHEAD_NIBRAN_INDEX	=	133	,		//		NIBRAN = number of entries per branch in the IBRAN array
INTEHEAD_NRBRAN_INDEX	=	134	,		//		NRBRAN = number of tries per branch in the RBRAN array
INTEHEAD_NINODE_INDEX	=	135	,		//		NINODE = number of entries per node in the INODE array
INTEHEAD_NRNODE_INDEX	=	136	,		//		NRNODE = number of entries per node in the RNODE array
INTEHEAD_NZNODE_INDEX	=	137	,		//		NZNODE = number of entries per node in the ZNODE array
INTEHEAD_NINOBR_INDEX	=	138	,		//		NINOBR = size of the INOBR array
intehead_139	=	139	,		//
intehead_140	=	140	,		//
intehead_141	=	141	,		//
intehead_142	=	142	,		//
intehead_143	=	143	,		//
intehead_144	=	144	,		//
intehead_145	=	145	,		//
intehead_146	=	146	,		//
intehead_147	=	147	,		//
intehead_148	=	148	,		//
intehead_149	=	149	,		//
intehead_150	=	150	,		//
intehead_151	=	151	,		//
intehead_152	=	152	,		//
intehead_153	=	153	,		//
intehead_154	=	154	,		//
intehead_155	=	155	,		//
intehead_156	=	156	,		//
intehead_157	=	157	,		//
intehead_158	=	158	,		//
intehead_159	=	159	,		//
intehead_160	=	160	,		//
intehead_161	=	161	,		//
INTEHEAD_NGCAUS_INDEX	=	162	,		//		NGCAUS = maximum number of aquifer connections actually used.
intehead_163	=	163	,		//
intehead_164	=	164	,		//
intehead_165	=	165	,		//
intehead_166	=	166	,		//
intehead_167	=	167	,		//
intehead_168	=	168	,		//
intehead_169	=	169	,		//
intehead_170	=	170	,		//
intehead_171	=	171	,		//
intehead_172	=	172	,		//
intehead_173	=	173	,		//
intehead_174	=	174	,		//
INTEHEAD_NSWLMX_INDEX	=	175	,		//	NSWLMX	0	Item 1 in WSEGDIMS keyword (runspec section)	NSWLMX = maximum number of segmented wells
INTEHEAD_NSEGMX_INDEX	=	176	,		//	NSEGMX	0	Item 2 in WSEGDIMS keyword (runspec section)	NSEGMX = maximum number of segments per well
INTEHEAD_NLBRMX_INDEX	=	177	,		//	NLBRMX	0	Item 3 in WSEGDIMS keyword (runspec section)	NLBRMX = maximum number of lateral branches per well
INTEHEAD_NISEGZ_INDEX	=	178	,		//	22	0	22	NISEGZ = number of entries per segment in ISEG array
INTEHEAD_NRSEGZ_INDEX	=	179	,		//	140	0	140	NRSEGZ = number of entries per segment in RSEG array
INTEHEAD_NILBRZ_INDEX	=	180	,		//	10		10	NILBRZ = number of entries per segment in ILBR array
INTEHEAD_RESTART_SIZE	=	181	,		//	0
intehead_182	=	182	,		//
intehead_183	=	183	,		//
intehead_184	=	184	,		//
intehead_185	=	185	,		//
intehead_186	=	186	,		//
intehead_187	=	187	,		//
intehead_188	=	188	,		//
intehead_189	=	189	,		//
intehead_190	=	190	,		//
intehead_191	=	191	,		//
intehead_192	=	192	,		//
intehead_193	=	193	,		//
intehead_194	=	194	,		//
intehead_195	=	195	,		//
intehead_196	=	196	,		//
intehead_197	=	197	,		//
intehead_198	=	198	,		//
intehead_199	=	199	,		//
intehead_200	=	200	,		//
intehead_201	=	201	,		//
intehead_202	=	202	,		//
intehead_203	=	203	,		//
intehead_204	=	204	,		//
intehead_205	=	205	,		//
INTEHEAD_IHOURZ_INDEX	=	206	,		//		IHOURZ = current simulation time HH:MM:SS – number of hours (HH) (0-23).
INTEHEAD_IMINTS_INDEX	=	207	,		//		IMINTS = current simulation time HH:MM:SS - number of minutes (MM) (0-59).
intehead_208	=	208	,		//
intehead_209	=	209	,		//
intehead_210	=	210	,		//
intehead_211	=	211	,		//
intehead_212	=	212	,		//
intehead_213	=	213	,		//
intehead_214	=	214	,		//
intehead_215	=	215	,		//
intehead_216	=	216	,		//
intehead_217	=	217	,		//
intehead_218	=	218	,		//
intehead_219	=	219	,		//
intehead_220	=	220	,		//
intehead_221	=	221	,		//
intehead_222	=	222	,		//
INTEHEAD_NIIAQN_INDEX	=	223	,		//		NIIAQN = number of lines of integer AQUNUM data.
INTEHEAD_NIRAQN_INDEX	=	224	,		//		NIRAQN = number of lines of real AQUNUM data.
intehead_225	=	225	,		//
INTEHEAD_NUMAQN_INDEX	=	226	,		//		NUMAQN = number of lines of AQUNUM data entered.
intehead_227	=	227	,		//
intehead_228	=	228	,		//
intehead_229	=	229	,		//
intehead_230	=	230	,		//
intehead_231	=	231	,		//
intehead_232	=	232	,		//
intehead_233	=	233	,		//
INTEHEAD_NICOTZ_INDEX	=	234	,		//		NICOTZ = number of entries in the ICOT array
INTEHEAD_NXCOTZ_INDEX	=	235	,		//		NXCOTZ = number of entries in the XCOT array
INTEHEAD_NIWETZ_INDEX	=	236	,		//		NIWETZ = number of entries in the IWET array
INTEHEAD_NXWETZ_INDEX	=	237	,		//		NXWETZ = number of entries in the XWET array
INTEHEAD_NIGRTZ_INDEX	=	238	,		//		NIGRTZ = number of entries in the IGRT array
INTEHEAD_NXGRTZ_INDEX	=	239	,		//		NXGRTZ = number of entries in the XGRT array
INTEHEAD_NSTRA2_INDEX	=	240	,		//		NSTRA2 = number of tracers + 2
intehead_241	=	241	,		//
intehead_242	=	242	,		//
intehead_243	=	243	,		//
intehead_244	=	244	,		//
intehead_245	=	245	,		//
intehead_246	=	246	,		//
intehead_247	=	247	,		//
intehead_248	=	248	,		//
intehead_249	=	249	,		//
intehead_250	=	250	,		//
intehead_251	=	251	,		//
INTEHEAD_MAAQID_INDEX	=	252	,		//		MAAQID = maximum number of analytic aquifers
intehead_253	=	253	,		//
intehead_254	=	254	,		//
intehead_255	=	255	,		//
intehead_256	=	256	,		//
intehead_257	=	257	,		//
intehead_258	=	258	,		//
intehead_259	=	259	,		//
intehead_260	=	260	,		//
intehead_261	=	261	,		//
intehead_262	=	262	,		//
intehead_263	=	263	,		//
intehead_264	=	264	,		//
intehead_265	=	265	,		//
intehead_266	=	266	,		//
intehead_267	=	267	,		//
intehead_268	=	268	,		//
intehead_269	=	269	,		//
intehead_270	=	270	,		//
INTEHEAD_NCRDMX_INDEX	=	271	,		//		NCRDMX = maximum number of chord segment links per well
intehead_272	=	272	,		//
intehead_273	=	273	,		//
intehead_274	=	274	,		//
intehead_275	=	275	,		//
intehead_276	=	276	,		//
intehead_277	=	277	,		//
intehead_278	=	278	,		//
intehead_279	=	279	,		//
intehead_280	=	280	,		//
intehead_281	=	281	,		//
intehead_282	=	282	,		//
intehead_283	=	283	,		//
intehead_284	=	284	,		//
intehead_285	=	285	,		//
intehead_286	=	286	,		//
intehead_287	=	287	,		//
intehead_288	=	288	,		//
intehead_289	=	289	,		//
intehead_290	=	290	,		//
intehead_291	=	291	,		//
intehead_292	=	292	,		//
intehead_293	=	293	,		//
intehead_294	=	294	,		//
intehead_295	=	295	,		//
intehead_296	=	296	,		//
intehead_297	=	297	,		//
intehead_298	=	298	,		//
intehead_299	=	299	,		//
intehead_300	=	300	,		//
intehead_301	=	301	,		//
intehead_302	=	302	,		//
intehead_303	=	303	,		//
intehead_304	=	304	,		//
intehead_305	=	305	,		//
intehead_306	=	306	,		//
intehead_307	=	307	,		//
intehead_308	=	308	,		//
intehead_309	=	309	,		//
intehead_310	=	310	,		//
intehead_311	=	311	,		//
intehead_312	=	312	,		//
intehead_313	=	313	,		//
intehead_314	=	314	,		//
intehead_315	=	315	,		//
intehead_316	=	316	,		//
intehead_317	=	317	,		//
intehead_318	=	318	,		//
intehead_319	=	319	,		//
intehead_320	=	320	,		//
intehead_321	=	321	,		//
intehead_322	=	322	,		//
intehead_323	=	323	,		//
intehead_324	=	324	,		//
intehead_325	=	325	,		//
intehead_326	=	326	,		//
intehead_327	=	327	,		//
intehead_328	=	328	,		//
intehead_329	=	329	,		//
intehead_330	=	330	,		//
intehead_331	=	331	,		//
intehead_332	=	332	,		//
intehead_333	=	333	,		//
intehead_334	=	334	,		//
intehead_335	=	335	,		//
intehead_336	=	336	,		//
intehead_337	=	337	,		//
intehead_338	=	338	,		//
intehead_339	=	339	,		//
intehead_340	=	340	,		//
intehead_341	=	341	,		//
intehead_342	=	342	,		//
intehead_343	=	343	,		//
intehead_344	=	344	,		//
intehead_345	=	345	,		//
intehead_346	=	346	,		//
intehead_347	=	347	,		//
intehead_348	=	348	,		//
intehead_349	=	349	,		//
intehead_350	=	350	,		//
intehead_351	=	351	,		//
intehead_352	=	352	,		//
intehead_353	=	353	,		//
intehead_354	=	354	,		//
intehead_355	=	355	,		//
intehead_356	=	356	,		//
intehead_357	=	357	,		//
intehead_358	=	358	,		//
intehead_359	=	359	,		//
intehead_360	=	360	,		//
intehead_361	=	361	,		//
intehead_362	=	362	,		//
intehead_363	=	363	,		//
intehead_364	=	364	,		//
intehead_365	=	365	,		//
intehead_366	=	366	,		//
intehead_367	=	367	,		//
intehead_368	=	368	,		//
intehead_369	=	369	,		//
intehead_370	=	370	,		//
intehead_371	=	371	,		//
intehead_372	=	372	,		//
intehead_373	=	373	,		//
intehead_374	=	374	,		//
intehead_375	=	375	,		//
intehead_376	=	376	,		//
intehead_377	=	377	,		//
intehead_378	=	378	,		//
intehead_379	=	379	,		//
intehead_380	=	380	,		//
intehead_381	=	381	,		//
intehead_382	=	382	,		//
intehead_383	=	383	,		//
intehead_384	=	384	,		//
intehead_385	=	385	,		//
intehead_386	=	386	,		//
intehead_387	=	387	,		//
intehead_388	=	388	,		//
intehead_389	=	389	,		//
intehead_390	=	390	,		//
intehead_391	=	391	,		//
intehead_392	=	392	,		//
intehead_393	=	393	,		//
intehead_394	=	394	,		//
intehead_395	=	395	,		//
intehead_396	=	396	,		//
intehead_397	=	397	,		//
intehead_398	=	398	,		//
intehead_399	=	399	,		//
intehead_400	=	400	,		//
intehead_401	=	401	,		//
intehead_402	=	402	,		//
intehead_403	=	403	,		//
intehead_404	=	404	,		//
intehead_405	=	405	,		//
intehead_406	=	406	,		//
intehead_407	=	407	,		//
intehead_408	=	408	,		//
intehead_409	=	409	,		//
intehead_410	=	410	,		//
INTEHEAD_ISECND_INDEX	=	411,			//		ISECND = current simulation time HH:MM:SS - number of seconds (SS), reported in microseconds (0-59,999,999)

// ---------------------------------------------------------------------
// ---------------------------------------------------------------------

INTEHEAD_NUMBER_OF_ITEMS        // MUST be last element of enum.
};

// =====================================================================
// Public Interface Below Separator
// =====================================================================

Opm::RestartIO::InteHEAD::InteHEAD()
    : data_(INTEHEAD_NUMBER_OF_ITEMS, 0)
{}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
dimensions(const int nx, const int ny, const int nz)
{
    this -> data_[INTEHEAD_NX_INDEX] = nx;
    this -> data_[INTEHEAD_NY_INDEX] = ny;
    this -> data_[INTEHEAD_NZ_INDEX] = nz;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
dimensions(const std::array<int,3>& cartDims)
{
    return this->dimensions(cartDims[0], cartDims[1], cartDims[2]);
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::numActive(const int nactive)
{
    this->data_[INTEHEAD_NACTIV_INDEX] = nactive;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::unitConventions(const UnitSystem& usys)
{
    const auto unit = [&usys]()
    {
        switch (usys) {
        case UnitSystem::Metric: return 1;
        case UnitSystem::Field:  return 2;
        case UnitSystem::Lab:    return 3;
        case UnitSystem::PVT_M:  return 4;
        }

        return 1;
    }();

    this->data_[INTEHEAD_UNIT_INDEX] = unit;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::wellTableDimensions(const WellTableDim& wtdim)
{
    this->data_[INTEHEAD_NWELLS_INDEX] = wtdim.numWells;
    this->data_[INTEHEAD_NCWMAX_INDEX] = wtdim.maxPerf;
    this->data_[INTEHEAD_NWGMAX_INDEX] = wtdim.maxWellInGroup;
    this->data_[INTEHEAD_NGMAXZ_INDEX] = wtdim.maxGroupInField;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::calenderDate(const Date& date)
{
    this->data_[INTEHEAD_DAY_INDEX]   = date.day;
    this->data_[INTEHEAD_MONTH_INDEX] = date.month;
    this->data_[INTEHEAD_YEAR_INDEX]  = date.year;

    this->data_[INTEHEAD_IHOURZ_INDEX] = date.hour;
    this->data_[INTEHEAD_IMINTS_INDEX] = date.minute;

    // Microseonds...
    this->data_[INTEHEAD_ISECND_INDEX] = (date.second * 1000) * 1000;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::activePhases(const Phases& phases)
{
    const auto iphs =
        (static_cast<unsigned int>  (phases.oil)   << 0u)
        | (static_cast<unsigned int>(phases.water) << 1u)
        | (static_cast<unsigned int>(phases.gas)   << 2u);

    this->data_[INTEHEAD_PHASE_INDEX] = static_cast<int>(iphs);

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
params_NWELZ(const int niwelz, const int nswelz, const int nxwelz, const int nzwelz)
{
    this -> data_[INTEHEAD_NIWELZ_INDEX] = niwelz;
    this -> data_[INTEHEAD_NSWELZ_INDEX] = nswelz;
    this -> data_[INTEHEAD_NXWELZ_INDEX] = nxwelz;
    this -> data_[INTEHEAD_NZWELZ_INDEX] = nzwelz;

    return *this;
}

Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
params_NCON(const int niconz, const int nsconz, const int nxconz)
{
    this -> data_[INTEHEAD_NICONZ_INDEX] = niconz;
    this -> data_[INTEHEAD_NSCONZ_INDEX] = nsconz;
    this -> data_[INTEHEAD_NXCONZ_INDEX] = nxconz;

    return *this;
}


Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
params_GRPZ(const std::array<int, 4>& grpz)
{
    this -> data_[INTEHEAD_NIGRPZ_INDEX] = grpz[0];
    this -> data_[INTEHEAD_NSGRPZ_INDEX] = grpz[1];
    this -> data_[INTEHEAD_NXGRPZ_INDEX] = grpz[2];
    this -> data_[INTEHEAD_NZGRPZ_INDEX] = grpz[3];

    return *this;
}


Opm::RestartIO::InteHEAD&
Opm::RestartIO::InteHEAD::
params_NAAQZ(const int ncamax,
             const int niaaqz,
             const int nsaaqz,
             const int nxaaqz,
             const int nicaqz,
             const int nscaqz,
             const int nacaqz)
{
    this -> data_[INTEHEAD_NCAMAX_INDEX] = ncamax;
    this -> data_[INTEHEAD_NIAAQZ_INDEX] = niaaqz;
    this -> data_[INTEHEAD_NSAAQZ_INDEX] = nsaaqz;
    this -> data_[INTEHEAD_NXAAQZ_INDEX] = nxaaqz;
    this -> data_[INTEHEAD_NICAQZ_INDEX] = nicaqz;
    this -> data_[INTEHEAD_NSCAQZ_INDEX] = nscaqz;
    this -> data_[INTEHEAD_NACAQZ_INDEX] = nacaqz;

    return *this;
}
