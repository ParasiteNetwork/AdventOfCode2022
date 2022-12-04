#include <iostream>
#include <cstring>

char const * rucksacks[] =
{
	"gtZDjBcmpcDgpZcmmbgtdtqmCGVCGGsvhCFCCqvmCMMM",
	"JrhfzfLTNfJhPnhQnfzHfCFFQFSGvMFCGQFsQSMSVs",
	"TllTRrfNNlfzwhtZBZgtRDBp",
	"vMdwjZdjwjvjdTZZvCcQMGnQMQcbcgLLCL",
	"rsVhfmssPWzDVGCLJSbCgPLSQG",
	"lfWNDHDgfszFRTFtwwNjdv",
	"GLPqVqdVGCLCdczjMjzMfzld",
	"JnWQvJDmvWBtlMzhrzfHQgcz",
	"tDtJDDDDtWRRmBwJwWtpPRsGCGScLPGSqspNCS",
	"ChVzZzfNDzNJmBQfjjJfmH",
	"MrTMPMncGMJvPPvPWTbrMWvgmBgQwgdpwmdpdpjwpHQcdw",
	"SPvvvbqrFvMvZzJzsFVzVJNV",
	"mvBbvMFqbMMVVmtCBHpDdDPTDspdNWPDVP",
	"zjSfftcQtwtSfQSpNDppsNsjPNdRPP",
	"fgfStJShrgvvCLLv",
	"GmFnNNwbFFbhQQGQnGwwwfBgnMMqVDBZVVBMfMVzVz",
	"vWzRRHzTHcgfZDVfBgfH",
	"SSTvrvRcPpcvjFGwNGbNpbwQwz",
	"FFgbZZFZgFmpstLgmbtzqNrwVPlMPlSWWrMPNp",
	"QQhTvjhcvjjvTcTcTfCcSRwwWzwzPMrzWNNWVVhwrwWq",
	"GRQBfCRnGGTcDvBfGvffCCjnFZtFFgStJLbLHbFLJZdgmd",
	"pppdjcrMMRDJLJdRcwRDrwssqHGGDHsZHHsvBVtvmVHV",
	"nlCFWzGzzQFlSlhGWnPzFbSsBZmsssmVVmsBvnHqvNVqqm",
	"lFTTTCSQSTrdGJJLJG",
	"jpsGMgsmghQwQsMmhlQshjtTNTRTnFqRWnnqRfFnnt",
	"SLBCHrcvZHbSvSZrSvSWnfvVNvftVlFRTqnRTq",
	"JrzdZbBcHBCrrlHrrSsMgmGpJPDPQmpgQgPG",
	"cmcZHgwgMgHSLmtjLfWPNNrWBNfffp",
	"JTqGTsClHslVVRVCVGVJGnBrjdnnrdBNvjPNBNBrWvnW",
	"VVlQlqTFJlzzlsVGsRCZMthHDbwbFhgcbwHchg",
	"qgZjgjjbssqgsjlNqjhTtdrfQdTdWLLnDVfHtHWd",
	"zcGMBDDzcLnztfQQQz",
	"JSppJcBScMmMFFBRCpRCMmGlggvjhbhlNlglwbslCZjhDZ",
	"hvhmqcqwwcTBvvwQnRQnRnTRFzFzQz",
	"jWLPPtPsgMtpdLMLWllpgLLQFQhFJjnVrzFrVFhnRzJJrJ",
	"WPWffgtSdspdhSMdlSdtfBbHmSvqbNBCCmcBmcvcCH",
	"frVcrVcggfSZJfbbJvBd",
	"hwWQnwhWQmQmThTSsdvvSMBTBzcb",
	"wGnFFCGlQwntGtCtwntwDmFwRgLrHqNRqqcNNgRrHHLggCjp",
	"wRSwwHDMsRGHvNBNjTgvjgJD",
	"mcLcFCclWQWQpPQWVQcQcvvNJjrNBTrvgJgBvTRvCg",
	"VFPbQLchQLSRfbMtdHGH",
	"lfVrhnlRRqrJZVDJdHSWCvJCJSbj",
	"BFsgcgMNNQgSvbfCff",
	"ffNPcMtzqPlnmRGh",
	"ZJplFmRJmWRJRWmTJCvtTtnLCtndCqtqnr",
	"SQsVPQHBQZNSNSLCfSLrcLcrrr",
	"VMjPjbNMDsVHmRllmZpZWmjh",
	"LcTLRbJhhdhLJbbclfVvfWQVWFRWFFfq",
	"rZNttSNvtgsPPFsqBFPWQF",
	"HGCSmHrrwNnHGMLpDhbzzpmJJv",
	"VlSWzRtWSJqWdfhdqBdF",
	"mTDHsmmmcHpgrCgCrTsMMtqfsFNsZqfdMZMNbd",
	"TDcpvrpHCprCpHrmcQvTHgTQzSnLJnPPJlLzwJtRVJwLjJ",
	"vZSWZJZJFvhZldZHdvvlphZSNGNnmzwCPNHNHGNrrRHGCPmP",
	"bjfgcbjTQTFQBnGRRBCBNwBnCz",
	"csqscsbssQLsgQcLgLQLQTQpFdlhdvdZdpZWhJplShWWtq",
	"QgQvHnfflfBwQCfwlfglnQQccNcRqGGcjmcsGjddwdzsJc",
	"DhZbTLZTDMVTsRzsqsRjszTz",
	"FSZVtMLMMWbSgqSvPQlnpH",
	"MMPllnnBmfSHvBgCLf",
	"whZjGRJdjcNjjhRjCvgCfbSvCZLHfpZs",
	"RRWGWwNRWwhwclmrgFmngFPMWm",
	"VVHQGDGDGsdRrmZBQZRCVHZCNcSTTPMwwvTTwSSNqBqvgMvN",
	"nfhdLfjFnJpblLbJjWhtnjWPScNnwSTPTPqTvgngNNvSvS",
	"fpWljtpLjflfLfzlhZGQHZQVddHrrQRDRz",
	"VCHCjwCwMSZSqQzhhQqcWZJD",
	"GGGrFFgNRNNgmfnTdgmWQpczvPvQPWQJGDpzzc",
	"lgTttRTgmfNRntrTTngrCbjCwJCHjLBBHlMVMsbB",
	"szgPPlCblggVszhLmzvcvNrqpjNqmrqqpGvG",
	"wBQDtBfQDtFvLjjctLqTMr",
	"ZFWWdDLQFwSfDSBSQQBWnnnQVdbhgRVbsHzsshbClzzCVggb",
	"VpVsHVcqcMVMMNHpsspstbMqzBztJZTBBfJfzTvZfvWJWSTv",
	"mDDQgCQQQHdrwgSvZSmJJZvWfJJf",
	"drCjggDlPdgrlbjNcnhcHsbpsj",
	"cNNDRRpDcNcTpppsqHLQGLfRLvHzLH",
	"lFntJjtbFFlsmsjvnGqHWLfhfqzzQh",
	"sgPbjBJtPgbPJblblJgbgbwdBTwDCwpwrdZZVcCcDppc",
	"GGclMjLnnjCMchcChLMLcnnzRFJDZJSRSzzzzDSShszPRS",
	"VHgFQgwVwfNNpQVfHzQsPPPJDbmZbJDJbS",
	"HfNVWdHVvgHgVWVNppNWVHwTlvBFcClBCjcTLTlBnnLrTL",
	"GTLdlJhffQwDRvWLrp",
	"HVZVNjjsPqzNjNNmNgDWMrRQpWvWRHrDHBWp",
	"VCqVzjPjCpVqCVPCsbctcnblcGlTbGnlbFJf",
	"flHdfdBNdZcflBMjqMjBNfZQhvJbGvqvsshJQsJCJDWvvD",
	"gFTzRRpzRTwbgbLmtCvsJhWsChrWCrtWCC",
	"VzzzFbVRLPznmRBffPNBHNMdlZfl",
	"FFFMwCqJFFmrRwgnbLrL",
	"GpjGpQHQpfjdjDRnLrbrRQmJzzgg",
	"BphfhDcNcHNvPBvSqJMWJS",
	"NndbWpDBNbjvWLZqWsWQ",
	"JPFFTSPfgcMgftQQGjvTmsGqzssG",
	"gPgcfcVFgcHqSqVhbBCHlpbbpDlhDD",
	"FSdfWFTTBnjsDCjsmrrT",
	"pQzLRVLppLGcQjqbmVDJsChCvCbVsm",
	"qHLRGqqZzGjLqBNMFdnHlNlBFN",
	"DjqbfBTchDjqqCjjCTWNTbdzSVzGZQGBwZnQnVwpSSnQ",
	"ssJlPrtvMsRLrrJQGNZJSpZpGzSG",
	"rlFssHsvPRPMvFmtHvtqjhTgjbqhWqNmNqgDNh",
	"vcpnRqwwLLbvvcGpDQWDFSCgMrWWQWRR",
	"gtNfBfllrFlHrlrl",
	"ZPzftBmsNBNBPJBZPmZPNtmPdGLsqbwqpqcndVLLGpVGvqgV",
	"vRBfQqqBQPfbrFvPBvPbhLDVDVDQZVVtZtlWLLLt",
	"jcJmFFwnhJVZLWVl",
	"sHTcmNNHzncmcjmdsBCrBCPCrBBqCFrqzb",
	"bbZRnGmNnBGGMNRTgCmWWGGSrvSvFHvzFvFQDF",
	"LjwphpdPdLpLJVqfJrQzDzfrvQHSvDcQrQ",
	"DJphdwDsnmbZsTZM",
	"rdNrZNBSzSztnNzWCcNpHlMwlwHWlM",
	"QqLGLJvLjtvQWhgHgchHwHJw",
	"GtjTGtDRqvfLRGnrzsmZmfrVFBrV",
	"TdMhZrTTNvwphcLL",
	"WnnmffmDWnWPsPCJNpNcpNVNQp",
	"fsjbWfFFfnmmDsFDnnflSSdczlMdTHTzTTRRBdtT",
	"cMcPcMcwgWJMjWWhFWCCQCmqCFdh",
	"bSLVLblnNnLbVfnsbSbCChSQdChptpdqZrmCmZ",
	"DLGNfnGVDNDHbfzjRcRgqHMRBJPc",
	"HVFVlVHjzjjlCJjHjCjnvDrggrgLdqzddMqrzz",
	"SSfBTmtNdLqngvrm",
	"TwnNfPWWpBSBNtTHZCGlPHCQJHZHPV",
	"prvccpFQpMcQBwsvssshdwSTPD",
	"qbGHVbNJGqwdPgDrTsDJ",
	"fGbGqqlGGHflqLlzZBBrRcrtrZlp",
	"fCSPhltMBmPmbdgd",
	"DjvJJscvTsHHDbWzBWsWbdwgLB",
	"VVHDZvTppRcJVFFppvvRJDJqMSGqCtZdthttrnthSZMGCr",
	"ZcSrSdrhDjBDDCmZdZmZjhwVHwqVVsMwgswVVwMfhw",
	"PNvzTPNbnzcPbGQNJTvqwsWgVgVMMWpQqwgHpp",
	"JTPGPTzNttnbRTPlPtNNRlFrFmBcmDljjmBFSCmLZZBr",
	"mNvRRCVMtNRdFNtMtBHHprpHgJgJWwpBnprg",
	"LZDDlSLlTslDfbcpJJWndwcscnwr",
	"qdZZGSDhMVRCGtmC",
	"VGFjjgBShGdGzQczcGRG",
	"MppqCDfCMwfLDfvNmrtWstRcMPzRMRsRsPQS",
	"NwDCffLppbqqrqvTBngSbnBHglZllH",
	"vdllJVDzmVDVqvvWvdqJlcWrCsfCsfSSsSJfCSfQQCCbCQ",
	"jnTHZPZHMjZhMjTpHgMpgnbNqBstnfrtSSrBSNssCrfN",
	"LHLTFLjTMTTTwjHhpHTcwmDcWVDlvRDmvqwWlW",
	"rqQsSStdmsdLqlNNPGlGlV",
	"FpFpzJNTcHzRHRHlGwFVLFBLFGVvlw",
	"WCCjWRNJTJWhQhbhrbnd",
	"jsQjfrRTRwzSsRTgNchlnlhqcnlQmQ",
	"dFDtdFBDddHLJpVpHHtVbtHFCWlWlGlNlmGggNqgglmcchqb",
	"dLDHMVdLtBBDBFVJBFthtJHRTvsMSvsTrTSRvPPjPzSwRP",
	"CSPpSrLlrlPrPchLnSlbDbbRttDVhbGRDDJRtD",
	"fzfvmzTMmfsFszsHZsHMHVfwtbjBDDGjtRBjQQGGJb",
	"HmvmTFmqmTsHqzzzzdTsMMScndccdLppnLCSPcCLrVgr",
	"pfMflRnfrnjrpjnFzDpfDMmMLRTLZVTgLsvdZgLLZHSVWZRd",
	"tBGNhwPGcNBBWwZddsSTTPgVLPdT",
	"JwthtwbbhNBQhwhbBCrzpnprnWnprlzWlClD",
	"PPnZZjnFNDjlJJhtMddfTTdD",
	"QGLHFWvQJtzfpvCt",
	"swqSmmQWLQwFWLwwRcqNNBnnbgPqbPNbglVZ",
	"GCLSjjZGZhpvGtBgjJlnJDhhJMVDPnJlJP",
	"mNtQQwNzQRHWdJHnPTsddlln",
	"zQrfmbtNbcQcrzmrRBZqBcvpjSGLZGLZBB",
	"zGNzgsjDssvNbPlWJfJq",
	"RLMVSRMLhCLZSMZHDSJWvpcqfbfhvpJqcWPv",
	"dMVHLFHLZMLRLLFRHHHVZMgDTntgstGwznzGGnzjDFwG",
	"wCLCHLBwzBtQRLHLbNFFfdqdDqVrVfBN",
	"JGvljmgGZvMlfDRRnnnZnfND",
	"GppRlgJlSllSgjMsmllpTjcCLczWztPWPwwwzWThtcQh",
	"WvHbvvWnFHszDRSltcCctCFD",
	"gCmJmCCPTPqpgrZtjdRtDRplcSjS",
	"rJJrQPPJQmrmrhGTznCfLMMbfvWfbCWQ",
	"TqBWtTbFBNNRRtwQpJJvvvZPpTSQ",
	"fRMfsMssrGhSmMwSQvvZJm",
	"VggcVlsCgHnVFnndbbnR",
	"NdrSSWBNPPSWWHPPlwlLZHLZLMhjlLLH",
	"pVptMTgVTzLwZTzlbF",
	"qsRmRJtsMvMqgqgRvCdcSrWSPcWrDmmdBN",
	"nbJnfqWcmCMnSBSHwzWBsHHz",
	"dVpdvdppdptppDlvlHcczSgNcgww",
	"VGTdTVtGtRLFPTDbcfCmmcCQJQjcrT",
	"VTjrjrjTlTjQMdpGrWMSHvSG",
	"wnNJbDmttnwnhNwcJmNGdvWvMSfvMfhSSppSdp",
	"JznFnNsGnzzGFDJsFNmLgVVQZBlLZjQTLTjTls",
	"hpngHwcpWHgjjfhzTJBfBB",
	"RFFbFlQlSdRsbRQQMGPRGdSGjBvvNTvzZMBvjzBBTJTvMBBT",
	"GPSSPDDDFzGlGGRzLzGGPRWqnprcgCHwCHpwHWVcncLV",
	"LLlLGffQLPRThRwP",
	"MpZjbmznWqmqZznmzmpZqZnMRgPBCTPfgRTTwTjhwBPPghjP",
	"VnZpMsMMJnWsmnJpJmzrtFlGQFrHGvSvfHStNV",
	"MQqHMQPnqmpDdTLLRnDjsj",
	"NGFzwgtLBtFFGrrCtzgfgCNgSsdTDSSTsdssjDdSlZRjTSBs",
	"zCwNLthfrbCgzzhqhmccJPhQHVmV",
	"SndBVcgdqcRBRcdPBBcVcQTSSMLMlTssMNMWsHMsLQ",
	"GmJvZvhqpvZtNwwWLTTLwMMm",
	"JFJpzFGZqjvhGZcjBPcCBBPnnVBc",
	"rJWbqTvwvJNbPDPPvLcZvPDp",
	"QMnfBsjmFPLcHRDfPp",
	"lQlMlmtFsMMBstljlnGhtMhmGNqJqTcWNNbWdGwdNNJCrTrq",
	"LcjcNCQNQWDpRDjRTj",
	"vWvszVVSsBGWsTJRFHRJTTSTRJ",
	"vvGbtqbGVVBqtzbqvBdzVLWNLClwnwMLWlQNMfdPQP",
	"TWBZsWrjzZzWBrBsrrsTLNNJvFnJVmlSFFQnGpmnSJJS",
	"qdCggdqqqhhqwhRbCwbCPqhlJFPPGJQVvvvnpVVmPnnFvS",
	"ffgCfghDqDdCsGWZjTsLrsfW",
	"QzQSSQmzSsLQcLmrcsLzccgqCnwqCtZDnDnrZwgnqTTT",
	"hFRHHRPRPMtWPGVPRlMljRPCgWBBDTgJBgnwqTZDBZDWDB",
	"jPjPHRMjjvdjVFhdNfbsbbQfbcddmNtL",
	"jJlTqMqJtdztJqzcSJSlTdSlprLsRRHwcRRrsrHbrnnRHsHL",
	"VVVMWNNWmNmLnPLRHrLp",
	"NGhfvvVWBNfNNCNCQTMqjzgTQBSSSqll",
	"SSSRMRSRpnMRHLqWLfPlDGlGWldD",
	"hbNtlmvrNrsVDWsGPfPfqG",
	"jvbBNmvlJjRcCzHFppCJ",
	"hhWWPjnBGBGnjqBWSnhhsNLllLNcLczJcqcTlLTlfl",
	"FHvFFMHwdmvrDbwCbbvHwdHnZTMLzTNTczflJTZclzNLlLcJ",
	"HdFFvdDvpCDdrnwrGhBQhWRRpsjQWWQW",
	"sBsvtJtdRdjNbWWrTllqlNgg",
	"nSZSnPPZzMSnSlScWWWgrVWCrqgrWMWr",
	"lzSncQcLZLzlwDvtdDdFdFJJhHvJ",
	"lpsTLDlTtFtlWHPDvvgPfgMrQQJM",
	"zmNbzcNjzldjwmbdbhhjcjRgfwrgvMwMMSRJSvQQvrRf",
	"ZhjqcjzNhmzNqBqNznmcWHplCFGnpCtFsGWHHWsH",
	"ZPGQBFHFbhSrHqtfSrSr",
	"nMdznzzMDTnjMQrMWtrMptplqpqS",
	"wzjczJmccTJCmcVghZBJbPBQBbVh",
	"wLLMJbqSBBnnJhbvbFSSRRlztTrHzrrrrd",
	"QNNGVPjWPGVqltTHWCqCdH",
	"sjNGmmGVGgQNGDVmsVpgqQVpMDhvbLwMffZfhZbLnfLLLZwb",
	"gQLcQrMtBPdwSBsSlmBm",
	"TfCpTJnTbfqgsgwgppsSzp",
	"jVbvTnvWfJnJjjbfCjWWjrFPrLMtcDPgLMQQRtgZVF",
	"gwpHvpgwngGHcnvNvgnmsqCzmMzlfqmmqzHHCm",
	"JrdSLdBVPRDtRtPfPPzCJhjqmljzmmqszzsM",
	"SWLDDtVdrZWtSBRZfRcwgFGnpNFpnTnWnTvT",
	"rpcnHrwrhWccNZDDBBgBVCSW",
	"nmzFRRjFmmJQNDJC",
	"qznMlqGnzRtRGvqGFRPrdMhwTpTLfLcppLHp",
	"wthvbmhmChWMRJLJzngZpzLLNC",
	"SsdBVjSTjBdffBFfcSdVHfTrnDZGpQgNZHNnLZGpJngJGLng",
	"sSdTcdVScdcrccjcrBPrBSjcvmRRwlWPhwmqtgWhMPtmMMqR",
	"CJJBdBCrHdBhtRHctBQhRMrBwZpwZWNZNSNTwSNpQWpZsSSW",
	"LVFnvnbDjLsDPsPqFFvPvDnTzSTwNwPZpSmpSpgmgZWNTW",
	"LjlflbFjsvVlrHcrHtrfcChH",
	"tVLJGNRtfBBNGBrfrbzmfhPsrsPC",
	"DWWDQHQgllSFqFzcsJmzzSSzmrrs",
	"MJFQDgMqnHlDvFdGNBNNZGNVVvjV",
	"wnNwGCBBFNWBqjFBnLLGVDHhHmDPHvZTjTvTrPvD",
	"bMbttVScMJQtdgSgstbJRSPmrTHmHmrmmSDZlrPrPDhv",
	"cMbgpsbVbzbdRMRFWLqzBfLGwwwwfW",
	"JpSnGSGpbGgsWWPHJrdfsT",
	"MNsRqNNvMQDTLWHlffNHLN",
	"qqmtRzRvCRRQDqjqjDmsmRpZwSZbcwbnCcCSBBnSSnnC",
	"TWqlqpRqRptqlRhrmtGGzhbSrSdz",
	"VgsBVMvgVZfZvPsMVNvfZfvVbSPdhFPFhbzLhJdGFJmLhhhL",
	"QZgvZgvHwbwHbMsMRllRjDRDnQRqlRjl",
	"fsPQwnHnHLLfnBBnwwGtjTGRWTWTWwhV",
	"jblbdjZFDMbGllqTGTtVlq",
	"gmdMgZMbjpZDcrrDgdmszsPLpQfpBPPnNQNLLz",
	"HRsPPGMhLPMrnPchPSwStjbSttSvtHSqQw",
	"dfsCfpCJVJCvdFBFwStwjj",
	"gTNWmWfTNVZVJzZWpWJgTpfhnDrMnDclgDlDrDRnRcMLDs",
	"ZQZQJMqdwmZvqfPmwRjpBBjHjnshnjtt",
	"zcTPTLDTFWLGTrTSWPcDSSHjRlhRsDhHslslssBRljjj",
	"TrNFLbTWrGNZvmvVQPQV",
	"htfLgmtSLcTWNLcT",
	"slbHlBBGbqRsblBHvdNJJcjFFNBTVWWWcn",
	"bbQsHMMblHrMsGRqvQhwCTQCwtQCzSpfmS",
	"zmqdphmFmSpTzhdqhFmwjjGbtcvDbcGGjllGQjSP",
	"HJFrMCsVLrHRRMCNrVMVnctvstlGcQlPtGGjQtGlvP",
	"RFLHLVWrNgVJzwzwfgffwdfp",
	"vdMjSmMMpmMWhRpndRmZnhvHqLpGHcJGGGDLHHLGcfcLfc",
	"lPBwwrsCgLFggcqqLW",
	"TWszsWNBTNdmSRvjbZZT",
	"zFlBGpzzzLLNjBwPcwwmcNPfWNQn",
	"VHSHRJTJDSVVnmcVVPpWmpnf",
	"DMZHHrDHHrJrrZrShZsHGbMBbFgGjGCgjpFlBzzb",
	"FVMpsvTqvqMssVsWZSrqWFvwlGDGwQzwfwQQNLzDlwlZwf",
	"hPbgBHhJJcJPwCwDpNllCCHC",
	"pnjbBmjgbgmqtSmsTtsF",
	"DHZHmfTmCfjDZHMZmzffHHnQwwTBdQwbSdBGBQwhBQTQww",
	"cqstRFWNtLrNFwdVShlBSlhBRl",
	"StJWpLptNWLtJcpqPrFHDjZzzvnDDHPCZjPvvz",
	"hzffhGVGGhzRqTBLTqHL",
	"sFFFsMQlwJMsmrBFSNHTHNqrTS",
	"pbdsJMdJMJbwbmJJtbTtgnffGgVVChvD",
	"FvJnFnCpQTddSSmFdFpPPsVhppDjBzjDVhDV",
	"RgZMZbsgzlDPlhjb",
	"cHHHRgRZgfHHZGZfHZcLLHrrCrmJCmddrsvdJsmvFFQG",
	"dpJDdZwLnvdvFmFMmHjslMLH",
	"CGCztgPhWCWhzzzNNPGfrrWfmbbsmmHjFHDMsbHMsjFPjbHm",
	"rNQDGzzhCCfNrzrDzChTcZZvQcTRJpTwdvQpVc",
	"VpvNGhGHGNhHbPsbVbvfFtLCzSCFSBsCFSFCLB",
	"MlqJwTnrRRrRnMlQMHfHzHzWFWtmTzLWFC",
	"ljZDDHqqjqRbpNhjNNgcgc",
	"qrQtDzcQzbrcfdbqrQrthtscSsvpvnsSHpTpLpspmsSs",
	"CVwNNVRNBSHsLSFBTv",
	"CVVVNZjlVlGwlGlljNlWJVrrfqbPQQqHqJhhftbfDJqf",
	"lpmrPDPDjPlmWrVzPztZwFjtFbBnRtZbbcRL",
	"dnqJCCgQdNqbqRbRbBLt",
	"QGhGddGCTdMHNTGgshgJhzvSmWWPSsnprpPzWzsWlr",
	"hCJHTdJJNvTdSSNssjvfwgntwDgtgwDGCtZwtRRB",
	"mbllFmFMFbMVWWLpbpZwwBZTZnnVwnTggtDB",
	"MmzLQpFPTmPzHvfJNNzhNs",
	"dzgBwzlgrrBrVLLlwLBgBlgRScDMMDDswMsHZRGDsZGZmM",
	"HPfPbjCFJjCvfnnsjsDDcccmZsRSMc",
	"hCvHfWPPnvJhPWpqNNhqLqzLqLLd"
};

#include <algorithm>
#include <cassert>

long get_points(char c)
{
	if(c >= 'a')
	{
		return c - 'a' + 1;
	}
	else
	{
		return c - 'A' + 27;
	}
}

void part1()
{
	long points = 0;
	
	for(char const * rucksack : rucksacks)
	{
		auto length = std::strlen(rucksack);
		
		std::string_view compA{rucksack, length / 2};
		std::string_view compB{rucksack + length / 2};
		
		auto pos = std::find_if(compA.begin(), compA.end(), [compB](char c) -> bool
		{
			return std::find(compB.begin(), compB.end(), c) != compB.end();
		});
		
		assert(pos != compA.end());
		
		points += get_points(*pos);
	}
	
	std::cout << points << std::endl;
}

void part2()
{
	long points = 0;
	
	for(unsigned i = 0; i < 300; )
	{
		std::string_view A{rucksacks[i++]};
		std::string_view B{rucksacks[i++]};
		std::string_view C{rucksacks[i++]};
		
		auto pos = std::find_if(A.begin(), A.end(), [B, C](char c) -> bool
		{
			auto bpos = std::find(B.begin(), B.end(), c) != B.end();
			auto cpos = std::find(C.begin(), C.end(), c) != C.end();
			return bpos && cpos;
		});
		
		assert(pos != A.end());
		
		points += get_points(*pos);
	}
	
	std::cout << points << std::endl;
}

int main()
{
	std::cout << "------PART 1\n";
	part1();
	std::cout << "------PART 2\n";
	part2();
	
	return 0;
}
