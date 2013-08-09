/*
Copyright (c) 2013, Regents of the University of Alaska

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Geographic Information Network of Alaska nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

This code was developed by Kevin Engle for the Geographic Information Network of Alaska.
*/



// Palette by Kevin Engle.
const char *DEFAULT_PALETTE[] = {
	"NaN 0 0 0",
	"-10200.000000 0 0 255",
	"0.000000 200 255 255",
	"0.000000 53 137 86",
	"50.000000 53 137 86",
	"50.000000 62 143 92",
	"100.000000 62 143 92",
	"100.000000 71 149 98",
	"150.000000 71 149 98",
	"150.000000 79 155 104",
	"200.000000 79 155 104",
	"200.000000 88 161 110",
	"250.000000 88 161 110",
	"250.000000 97 167 116",
	"300.000000 97 167 116",
	"300.000000 106 173 122",
	"350.000000 106 173 122",
	"350.000000 115 179 128",
	"400.000000 115 179 128",
	"400.000000 124 184 133",
	"450.000000 124 184 133",
	"450.000000 132 190 139",
	"500.000000 132 190 139",
	"500.000000 141 196 145",
	"550.000000 141 196 145",
	"550.000000 150 202 151",
	"600.000000 150 202 151",
	"600.000000 159 208 157",
	"650.000000 159 208 157",
	"650.000000 168 214 163",
	"700.000000 168 214 163",
	"700.000000 177 220 169",
	"750.000000 177 220 169",
	"750.000000 185 226 175",
	"800.000000 185 226 175",
	"800.000000 194 231 180",
	"850.000000 194 231 180",
	"850.000000 203 237 186",
	"900.000000 203 237 186",
	"900.000000 212 243 192",
	"950.000000 212 243 192",
	"950.000000 221 249 198",
	"1000.000000 221 249 198",
	"1000.000000 230 255 204",
	"1100.000000 230 255 204",
	"1100.000000 227 251 201",
	"1200.000000 227 251 201",
	"1200.000000 225 248 197",
	"1300.000000 225 248 197",
	"1300.000000 223 244 194",
	"1400.000000 223 244 194",
	"1400.000000 221 241 190",
	"1500.000000 221 241 190",
	"1500.000000 219 237 187",
	"1600.000000 219 237 187",
	"1600.000000 217 234 184",
	"1700.000000 217 234 184",
	"1700.000000 215 230 180",
	"1800.000000 215 230 180",
	"1800.000000 213 227 177",
	"1900.000000 213 227 177",
	"1900.000000 210 223 173",
	"2000.000000 210 223 173",
	"2000.000000 208 220 170",
	"2100.000000 208 220 170",
	"2100.000000 206 216 167",
	"2200.000000 206 216 167",
	"2200.000000 204 212 163",
	"2300.000000 204 212 163",
	"2300.000000 202 209 160",
	"2400.000000 202 209 160",
	"2400.000000 200 205 156",
	"2500.000000 200 205 156",
	"2500.000000 198 202 153",
	"2600.000000 198 202 153",
	"2600.000000 196 198 150",
	"2700.000000 196 198 150",
	"2700.000000 193 195 146",
	"2800.000000 193 195 146",
	"2800.000000 191 191 143",
	"2900.000000 191 191 143",
	"2900.000000 189 188 139",
	"3000.000000 189 188 139",
	"3000.000000 187 184 136",
	"3100.000000 187 184 136",
	"3100.000000 185 181 133",
	"3200.000000 185 181 133",
	"3200.000000 183 177 129",
	"3300.000000 183 177 129",
	"3300.000000 181 174 126",
	"3400.000000 181 174 126",
	"3400.000000 179 170 122",
	"3500.000000 179 170 122",
	"3500.000000 176 166 119",
	"3600.000000 176 166 119",
	"3600.000000 174 163 116",
	"3700.000000 174 163 116",
	"3700.000000 172 159 112",
	"3800.000000 172 159 112",
	"3800.000000 170 156 109",
	"3900.000000 170 156 109",
	"3900.000000 168 152 105",
	"4000.000000 168 152 105",
	"4000.000000 166 149 102",
	"4100.000000 166 149 102",
	"4100.000000 164 145 99",
	"4200.000000 164 145 99",
	"4200.000000 162 142 95",
	"4300.000000 162 142 95",
	"4300.000000 159 138 92",
	"4400.000000 159 138 92",
	"4400.000000 157 135 88",
	"4500.000000 157 135 88",
	"4500.000000 155 131 85",
	"4600.000000 155 131 85",
	"4600.000000 153 127 82",
	"4700.000000 153 127 82",
	"4700.000000 151 124 78",
	"4800.000000 151 124 78",
	"4800.000000 149 120 75",
	"4900.000000 149 120 75",
	"4900.000000 147 117 71",
	"5000.000000 147 117 71",
	"5000.000000 145 113 68",
	"5100.000000 145 113 68",
	"5100.000000 142 110 65",
	"5200.000000 142 110 65",
	"5200.000000 140 106 61",
	"5300.000000 140 106 61",
	"5300.000000 138 103 58",
	"5400.000000 138 103 58",
	"5400.000000 136 99 54",
	"5500.000000 136 99 54",
	"5500.000000 134 96 51",
	"5600.000000 134 96 51",
	"5600.000000 132 92 48",
	"5700.000000 132 92 48",
	"5700.000000 130 89 44",
	"5800.000000 130 89 44",
	"5800.000000 128 85 41",
	"5900.000000 128 85 41",
	"5900.000000 125 81 37",
	"6000.000000 125 81 37",
	"6000.000000 123 78 34",
	"6100.000000 123 78 34",
	"6100.000000 121 74 31",
	"6200.000000 121 74 31",
	"6200.000000 119 71 27",
	"6300.000000 119 71 27",
	"6300.000000 117 67 24",
	"6400.000000 117 67 24",
	"6400.000000 115 64 20",
	"6500.000000 115 64 20",
	"6500.000000 113 60 17",
	"6600.000000 113 60 17",
	"6600.000000 111 57 14",
	"6700.000000 111 57 14",
	"6700.000000 108 53 10",
	"6800.000000 108 53 10",
	"6800.000000 106 50 7",
	"6900.000000 106 50 7",
	"6900.000000 104 46 3",
	"7000.000000 104 46 3",
	NULL };
