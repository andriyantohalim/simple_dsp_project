/* The standard CSS for doxygen 1.9.8*/

html {
/* page base colors */
--page-background-color: white;
--page-foreground-color: black;
--page-link-color: #3D578C;
--page-visited-link-color: #4665A2;

/* index */
--index-odd-item-bg-color: #F8F9FC;
--index-even-item-bg-color: white;
--index-header-color: black;
--index-separator-color: #A0A0A0;

/* header */
--header-background-color: #F9FAFC;
--header-separator-color: #C4CFE5;
--header-gradient-image: url('nav_h.png');
--group-header-separator-color: #879ECB;
--group-header-color: #354C7B;
--inherit-header-color: gray;

--footer-foreground-color: #2A3D61;
--footer-logo-width: 104px;
--citation-label-color: #334975;
--glow-color: cyan;

--title-background-color: white;
--title-separator-color: #5373B4;
--directory-separator-color: #9CAFD4;
--separator-color: #4A6AAA;

--blockquote-background-color: #F7F8FB;
--blockquote-border-color: #9CAFD4;

--scrollbar-thumb-color: #9CAFD4;
--scrollbar-background-color: #F9FAFC;

--icon-background-color: #728DC1;
--icon-foreground-color: white;
--icon-doc-image: url('doc.svg');
--icon-folder-open-image: url('folderopen.svg');
--icon-folder-closed-image: url('folderclosed.svg');

/* brief member declaration list */
--memdecl-background-color: #F9FAFC;
--memdecl-separator-color: #DEE4F0;
--memdecl-foreground-color: #555;
--memdecl-template-color: #4665A2;

/* detailed member list */
--memdef-border-color: #A8B8D9;
--memdef-title-background-color: #E2E8F2;
--memdef-title-gradient-image: url('nav_f.png');
--memdef-proto-background-color: #DFE5F1;
--memdef-proto-text-color: #253555;
--memdef-proto-text-shadow: 0px 1px 1px rgba(255, 255, 255, 0.9);
--memdef-doc-background-color: white;
--memdef-param-name-color: #602020;
--memdef-template-color: #4665A2;

/* tables */
--table-cell-border-color: #2D4068;
--table-header-background-color: #374F7F;
--table-header-foreground-color: #FFFFFF;

/* labels */
--label-background-color: #728DC1;
--label-left-top-border-color: #5373B4;
--label-right-bottom-border-color: #C4CFE5;
--label-foreground-color: white;

/** navigation bar/tree/menu */
--nav-background-color: #F9FAFC;
--nav-foreground-color: #364D7C;
--nav-gradient-image: url('tab_b.png');
--nav-gradient-hover-image: url('tab_h.png');
--nav-gradient-active-image: url('tab_a.png');
--nav-gradient-active-image-parent: url("../tab_a.png");
--nav-separator-image: url('tab_s.png');
--nav-breadcrumb-image: url('bc_s.png');
--nav-breadcrumb-border-color: #C2CDE4;
--nav-splitbar-image: url('splitbar.png');
--nav-font-size-level1: 13px;
--nav-font-size-level2: 10px;
--nav-font-size-level3: 9px;
--nav-text-normal-color: #283A5D;
--nav-text-hover-color: white;
--nav-text-active-color: white;
--nav-text-normal-shadow: 0px 1px 1px rgba(255, 255, 255, 0.9);
--nav-text-hover-shadow: 0px 1px 1px rgba(0, 0, 0, 1.0);
--nav-text-active-shadow: 0px 1px 1px rgba(0, 0, 0, 1.0);
--nav-menu-button-color: #364D7C;
--nav-menu-background-color: white;
--nav-menu-foreground-color: #555555;
--nav-menu-toggle-color: rgba(255, 255, 255, 0.5);
--nav-arrow-color: #9CAFD4;
--nav-arrow-selected-color: #9CAFD4;

/* table of contents */
--toc-background-color: #F4F6FA;
--toc-border-color: #D8DFEE;
--toc-header-color: #4665A2;
--toc-down-arrow-image: url("data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' version='1.1' height='10px' width='5px' fill='grey'><text x='0' y='5' font-size='10'>&%238595;</text></svg>");

/** search field */
--search-background-color: white;
--search-foreground-color: #909090;
--search-magnification-image: url('mag.svg');
--search-magnification-select-image: url('mag_sel.svg');
--search-active-color: black;
--search-filter-background-color: #F9FAFC;
--search-filter-foreground-color: black;
--search-filter-border-color: #90A5CE;
--search-filter-highlight-text-color: white;
--search-filter-highlight-bg-color: #3D578C;
--search-results-foreground-color: #425E97;
--search-results-background-color: #EEF1F7;
--search-results-border-color: black;
--search-box-shadow: inset 0.5px 0.5px 3px 0px #555;

/** code fragments */
--code-keyword-color: #008000;
--code-type-keyword-color: #604020;
--code-flow-keyword-color: #E08000;
--code-comment-color: #800000;
--code-preprocessor-color: #806020;
--code-string-literal-color: #002080;
--code-char-literal-color: #008080;
--code-xml-cdata-color: black;
--code-vhdl-digit-color: #FF00FF;
--code-vhdl-char-color: #000000;
--code-vhdl-keyword-color: #700070;
--code-vhdl-logic-color: #FF0000;
--code-link-color: #4665A2;
--code-external-link-color: #4665A2;
--fragment-foreground-color: black;
--fragment-background-color: #FBFCFD;
--fragment-border-color: #C4CFE5;
--fragment-lineno-border-color: #00FF00;
--fragment-lineno-background-color: #E8E8E8;
--fragment-lineno-foreground-color: black;
--fragment-lineno-link-fg-color: #4665A2;
--fragment-lineno-link-bg-color: #D8D8D8;
--fragment-lineno-link-hover-fg-color: #4665A2;
--fragment-lineno-link-hover-bg-color: #C8C8C8;
--tooltip-foreground-color: black;
--tooltip-background-color: white;
--tooltip-border-color: gray;
--tooltip-doc-color: grey;
--tooltip-declaration-color: #006318;
--tooltip-link-color: #4665A2;
--tooltip-shadow: 1px 1px 7px gray;
--fold-line-color: #808080;
--fold-minus-image: url('minus.svg');
--fold-plus-image: url('plus.svg');
--fold-minus-image-relpath: url('../../minus.svg');
--fold-plus-image-relpath: url('../../plus.svg');

/** font-family */
--font-family-normal: Roboto,sans-serif;
--font-family-monospace: 'JetBrains Mono',Consolas,Monaco,'Andale Mono','Ubuntu Mono',monospace,fixed;
--font-family-nav: 'Lucida Grande',Geneva,Helvetica,Arial,sans-serif;
--font-family-title: Tahoma,Arial,sans-serif;
--font-family-toc: Verdana,'DejaVu Sans',Geneva,sans-serif;
--font-family-search: Arial,Verdana,sans-serif;
--font-family-icon: Arial,Helvetica;
--font-family-tooltip: Roboto,sans-serif;

}

@media (prefers-color-scheme: dark) {
  html:not(.dark-mode) {
    color-scheme: dark;

/* page base colors */
--page-background-color: black;
--page-foreground-color: #C9D1D9;
--page-link-color: #90A5CE;
--page-visited-link-color: #A3B4D7;

/* index */
--index-odd-item-bg-color: #0B101A;
--index-even-item-bg-color: black;
--index-header-color: #C4CFE5;
--index-separator-color: #334975;

/* header */
--header-background-color: #070B11;
--header-separator-color: #141C2E;
--header-gradient-image: url('nav_hd.png');
--group-header-separator-color: #283A5D;
--group-header-color: #90A5CE;
--inherit-header-color: #A0A0A0;

--footer-foreground-color: #5B7AB7;
--footer-logo-width: 60px;
--citation-label-color: #90A5CE;
--glow-color: cyan;

--title-background-color: #090D16;
--title-separator-color: #354C79;
--directory-separator-color: #283A5D;
--separator-color: #283A5D;

--blockquote-background-color: #101826;
--blockquote-border-color: #283A5D;

--scrollbar-thumb-color: #283A5D;
--scrollbar-background-color: #070B11;

--icon-background-color: #334975;
--icon-foreground-color: #C4CFE5;
--icon-doc-image: url('docd.svg');
--icon-folder-open-image: url('folderopend.svg');
--icon-folder-closed-image: url('folderclosedd.svg');

/* brief member declaration list */
--memdecl-background-color: #0B101A;
--memdecl-separator-color: #2C3F65;
--memdecl-foreground-color: #BBB;
--memdecl-template-color: #7C95C6;

/* detailed member list */
--memdef-border-color: #233250;
--memdef-title-background-color: #1B2840;
--memdef-title-gradient-image: url('nav_fd.png');
--memdef-proto-background-color: #19243A;
--memdef-proto-text-color: #9DB0D4;
--memdef-proto-text-shadow: 0px 1px 1px rgba(0, 0, 0, 0.9);
--memdef-doc-background-color: black;
--memdef-param-name-color: #D28757;
--memdef-template-color: #7C95C6;

/* tables */
--table-cell-border-color: #283A5D;
--table-header-background-color: #283A5D;
--table-header-foreground-color: #C4CFE5;

/* labels */
--label-background-color: #354C7B;
--label-left-top-border-color: #4665A2;
--label-right-bottom-border-color: #283A5D;
--label-foreground-color: #CCCCCC;

/** navigation bar/tree/menu */
--nav-background-color: #101826;
--nav-foreground-color: #364D7C;
--nav-gradient-image: url('tab_bd.png');
--nav-gradient-hover-image: url('tab_hd.png');
--nav-gradient-active-image: url('tab_ad.png');
--nav-gradient-active-image-parent: url("../tab_ad.png");
--nav-separator-image: url('tab_sd.png');
--nav-breadcrumb-image: url('bc_sd.png');
--nav-breadcrumb-border-color: #2A3D61;
--nav-splitbar-image: url('splitbard.png');
--nav-font-size-level1: 13px;
--nav-font-size-level2: 10px;
--nav-font-size-level3: 9px;
--nav-text-normal-color: #B6C4DF;
--nav-text-hover-color: #DCE2EF;
--nav-text-active-color: #DCE2EF;
--nav-text-normal-shadow: 0px 1px 1px black;
--nav-text-hover-shadow: 0px 1px 1px rgba(0, 0, 0, 1.0);
--nav-text-active-shadow: 0px 1px 1px rgba(0, 0, 0, 1.0);
--nav-menu-button-color: #B6C4DF;
--nav-menu-background-color: #05070C;
--nav-menu-foreground-color: #BBBBBB;
--nav-menu-toggle-color: rgba(255, 255, 255, 0.2);
--nav-arrow-color: #334975;
--nav-arrow-selected-color: #90A5CE;

/* table of contents */
--toc-background-color: #151E30;
--toc-border-color: #202E4A;
--toc-header-color: #A3B4D7;
--toc-down-arrow-image: url("data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' version='1.1' height='10px' width='5px'><text x='0' y='5' font-size='10' fill='grey'>&%238595;</text></svg>");

/** search field */
--search-background-color: black;
--search-foreground-color: #C5C5C5;
--search-magnification-image: url('mag_d.svg');
--search-magnification-select-image: url('mag_seld.svg');
--search-active-color: #C5C5C5;
--search-filter-background-color: #101826;
--search-filter-foreground-color: #90A5CE;
--search-filter-border-color: #7C95C6;
--search-filter-highlight-text-color: #BCC9E2;
--search-filter-highlight-bg-color: #283A5D;
--search-results-background-color: #101826;
--search-results-foreground-color: #90A5CE;
--search-results-border-color: #7C95C6;
--search-box-shadow: inset 0.5px 0.5px 3px 0px #2F436C;

/** code fragments */
--code-keyword-color: #CC99CD;
--code-type-keyword-color: #AB99CD;
--code-flow-keyword-color: #E08000;
--code-comment-color: #717790;
--code-preprocessor-color: #65CABE;
--code-string-literal-color: #7EC699;
--code-char-literal-color: #00E0F0;
--code-xml-cdata-color: #C9D1D9;
--code-vhdl-digit-color: #FF00FF;
--code-vhdl-char-color: #C0C0C0;
--code-vhdl-keyword-color: #CF53C9;
--code-vhdl-logic-color: #FF0000;
--code-link-color: #79C0FF;
--code-external-link-color: #79C0FF;
--fragment-foreground-color: #C9D1D9;
--fragment-background-color: black;
--fragment-border-color: #30363D;
--fragment-lineno-border-color: #30363D;
--fragment-lineno-background-color: black;
--fragment-lineno-foreground-color: #6E7681;
--fragment-lineno-link-fg-color: #6E7681;
--fragment-lineno-link-bg-color: #303030;
--fragment-lineno-link-hover-fg-color: #8E96A1;
--fragment-lineno-link-hover-bg-color: #505050;
--tooltip-foreground-color: #C9D1D9;
--tooltip-background-color: #202020;
--tooltip-border-color: #C9D1D9;
--tooltip-doc-color: #D9E1E9;
--tooltip-declaration-color: #20C348;
--tooltip-link-color: #79C0FF;
--tooltip-shadow: none;
--fold-line-color: #808080;
--fold-minus-image: url('minusd.svg');
--fold-plus-image: url('plusd.svg');
--fold-minus-image-relpath: url('../../minusd.svg');
--fold-plus-image-relpath: url('../../plusd.svg');

/** font-family */
--font-family-normal: Roboto,sans-serif;
--font-family-monospace: 'JetBrains Mono',Consolas,Monaco,'Andale Mono','Ubuntu Mono',monospace,fixed;
--font-family-nav: 'Lucida Grande',Geneva,Helvetica,Arial,sans-serif;
--font-family-title: Tahoma,Arial,sans-serif;
--font-family-toc: Verdana,'DejaVu Sans',Geneva,sans-serif;
--font-family-search: Arial,Verdana,sans-serif;
--font-family-icon: Arial,Helvetica;
--font-family-tooltip: Roboto,sans-serif;

}}
body {
    background-color: var(--page-background-color);
    color: var(--page-foreground-color);
}

body, table, div, p, dl {
	font-weight: 400;
	font-size: 14px;
	font-family: var(--font-family-normal);
	line-height: 22px;
}

/* @group Heading Levels */

.title {
	font-weight: 400;
	font-size: 14px;
	font-family: var(--font-family-normal);
	line-height: 28px;
	font-size: 150%;
	font-weight: bold;
	margin: 10px 2px;
}

h1.groupheader {
	font-size: 150%;
}

h2.groupheader {
	border-bottom: 1px solid var(--group-header-separator-color);
	color: var(--group-header-color);
	font-size: 150%;
	font-weight: normal;
	margin-top: 1.75em;
	padding-top: 8px;
	padding-bottom: 4px;
	width: 100%;
}

h3.groupheader {
	font-size: 100%;
}

h1, h2, h3, h4, h5, h6 {
	-webkit-transition: text-shadow 0.5s linear;
	-moz-transition: text-shadow 0.5s linear;
	-ms-transition: text-shadow 0.5s linear;
	-o-transition: text-shadow 0.5s linear;
	transition: text-shadow 0.5s linear;
	margin-right: 15px;
}

h1.glow, h2.glow, h3.glow, h4.glow, h5.glow, h6.glow {
	text-shadow: 0 0 15px var(--glow-color);
}

dt {
	font-weight: bold;
}

p.startli, p.startdd {
	margin-top: 2px;
}

th p.starttd, th p.intertd, th p.endtd {
        font-size: 100%;
        font-weight: 700;
}

p.starttd {
	margin-top: 0px;
}

p.endli {
	margin-bottom: 0px;
}

p.enddd {
	margin-bottom: 4px;
}

p.endtd {
	margin-bottom: 2px;
}

p.interli {
}

p.interdd {
}

p.intertd {
}

/* @end */

caption {
	font-weight: bold;
}

span.legend {
	font-size: 70%;
	text-align: center;
}

h3.version {
	font-size: 90%;
	text-align: center;
}

div.navtab {
	padding-right: 15px;
	text-align: right;
	line-height: 110%;
}

div.navtab table {
	border-spacing: 0;
}

td.navtab {
	padding-right: 6px;
	padding-left: 6px;
}

td.navtabHL {
	background-image: var(--nav-gradient-active-image);
	background-repeat:repeat-x;
	padding-right: 6px;
	padding-left: 6px;
}

td.navtabHL a, td.navtabHL a:visited {
	color: var(--nav-text-hover-color);
	text-shadow: var(--nav-text-hover-shadow);
}

a.navtab {
	font-weight: bold;
}

div.qindex{
	text-align: center;
	width: 100%;
	line-height: 140%;
	font-size: 130%;
	color: var(--index-separator-color);
}

#main-menu a:focus {
	outline: auto;
	z-index: 10;
	position: relative;
}

dt.alphachar{
	font-size: 180%;
	font-weight: bold;
}

.alphachar a{
	color: var(--index-header-color);
}

.alphachar a:hover, .alphachar a:visited{
	text-decoration: none;
}

.classindex dl {
	padding: 25px;
	column-count:1
}

.classindex dd {
	display:inline-block;
	margin-left: 50px;
	width: 90%;
	line-height: 1.15em;
}

.classindex dl.even {
	background-color: var(--index-even-item-bg-color);
}

.classindex dl.odd {
	background-color: var(--index-odd-item-bg-color);
}

@media(min-width: 1120px) {
	.classindex dl {
		column-count:2
	}
}

@media(min-width: 1320px) {
	.classindex dl {
		column-count:3
	}
}


/* @group Link Styling */

a {
	color: var(--page-link-color);
	font-weight: normal;
	text-decoration: none;
}

.contents a:visited {
	color: var(--page-visited-link-color);
}

a:hover {
	text-decoration: underline;
}

a.el {
	font-weight: bold;
}

a.elRef {
}

a.code, a.code:visited, a.line, a.line:visited {
	color: var(--code-link-color);
}

a.codeRef, a.codeRef:visited, a.lineRef, a.lineRef:visited {
	color: var(--code-external-link-color);
}

a.code.hl_class { /* style for links to class names in code snippets */ }
a.code.hl_struct { /* style for links to struct names in code snippets */ }
a.code.hl_union { /* style for links to union names in code snippets */ }
a.code.hl_interface { /* style for links to interface names in code snippets */ }
a.code.hl_protocol { /* style for links to protocol names in code snippets */ }
a.code.hl_category { /* style for links to category names in code snippets */ }
a.code.hl_exception { /* style for links to exception names in code snippets */ }
a.code.hl_service { /* style for links to service names in code snippets */ }
a.code.hl_singleton { /* style for links to singleton names in code snippets */ }
a.code.hl_concept { /* style for links to concept names in code snippets */ }
a.code.hl_namespace { /* style for links to namespace names in code snippets */ }
a.code.hl_package { /* style for links to package names in code snippets */ }
a.code.hl_define { /* style for links to macro names in code snippets */ }
a.code.hl_function { /* style for links to function names in code snippets */ }
a.code.hl_variable { /* style for links to variable names in code snippets */ }
a.code.hl_typedef { /* style for links to typedef names in code snippets */ }
a.code.hl_enumvalue { /* style for links to enum value names in code snippets */ }
a.code.hl_enumeration { /* style for links to enumeration names in code snippets */ }
a.code.hl_signal { /* style for links to Qt signal names in code snippets */ }
a.code.hl_slot { /* style for links to Qt slot names in code snippets */ }
a.code.hl_friend { /* style for links to friend names in code snippets */ }
a.code.hl_dcop { /* style for links to KDE3 DCOP names in code snippets */ }
a.code.hl_property { /* style for links to property names in code snippets */ }
a.code.hl_event { /* style for links to event names in code snippets */ }
a.code.hl_sequence { /* style for links to sequence names in code snippets */ }
a.code.hl_dictionary { /* style for links to dictionary names in code snippets */ }

/* @end */

dl.el {
	margin-left: -1cm;
}

ul {
  overflow: visible;
}

ul.multicol {
        -moz-column-gap: 1em;
        -webkit-column-gap: 1em;
        column-gap: 1em;
        -moz-column-count: 3;
        -webkit-column-count: 3;
        column-count: 3;
        list-style-type: none;
}

#side-nav ul {
  overflow: visible; /* reset ul rule for scroll bar in GENERATE_TREEVIEW window */
}

#main-nav ul {
  overflow: visible; /* reset ul rule for the navigation bar drop down lists */
}

.fragment {
  text-align: left;
  direction: ltr;
  overflow-x: auto; /*Fixed: fragment lines overlap floating elements*/
  overflow-y: hidden;
}

pre.fragment {
        border: 1px solid var(--fragment-border-color);
        background-color: var(--fragment-background-color);
	color: var(--fragment-foreground-color);
        padding: 4px 6px;
        margin: 4px 8px 4px 2px;
        overflow: auto;
        word-wrap: break-word;
        font-size:  9pt;
        line-height: 125%;
        font-family: var(--font-family-monospace);
        font-size: 105%;
}

div.fragment {
	padding: 0 0 1px 0; /*Fixed: last line underline overlap border*/
	margin: 4px 8px 4px 2px;
	color: var(--fragment-foreground-color);
	background-color: var(--fragment-background-color);
	border: 1px solid var(--fragment-border-color);
}

div.line {
	font-family: var(--font-family-monospace);
        font-size: 13px;
	min-height: 13px;
	line-height: 1.2;
	text-wrap: unrestricted;
	white-space: -moz-pre-wrap; /* Moz */
	white-space: -pre-wrap;     /* Opera 4-6 */
	white-space: -o-pre-wrap;   /* Opera 7 */
	white-space: pre-wrap;      /* CSS3  */
	word-wrap: break-word;      /* IE 5.5+ */
	text-indent: -53px;
	padding-left: 53px;
	padding-bottom: 0px;
	margin: 0px;
	-webkit-transition-property: background-color, box-shadow;
	-webkit-transition-duration: 0.5s;
	-moz-transition-property: background-color, box-shadow;
	-moz-transition-duration: 0.5s;
	-ms-transition-property: background-color, box-shadow;
	-ms-transition-duration: 0.5s;
	-o-transition-property: background-color, box-shadow;
	-o-transition-duration: 0.5s;
	transition-property: background-color, box-shadow;
	transition-duration: 0.5s;
}

div.line:after {
    content:"\000A";
    white-space: pre;
}

div.line.glow {
	background-color: var(--glow-color);
	box-shadow: 0 0 10px var(--glow-color);
}

span.fold {
        margin-left: 5px;
        margin-right: 1px;
        margin-top: 0px;
        margin-bottom: 0px;
        padding: 0px;
	display: inline-block;
	width: 12px;
	height: 12px;
	background-repeat:no-repeat;
        background-position:center;
}

span.lineno {
	padding-right: 4px;
        margin-right: 9px;
	text-align: right;
	border-right: 2px solid var(--fragment-lineno-border-color);
	color: var(--fragment-lineno-foreground-color);
	background-color: var(--fragment-lineno-background-color);
        white-space: pre;
}
span.lineno a, span.lineno a:visited {
	color: var(--fragment-lineno-link-fg-color);
	background-color: var(--fragment-lineno-link-bg-color);
}

span.lineno a:hover {
	color: var(--fragment-lineno-link-hover-fg-color);
	background-color: var(--fragment-lineno-link-hover-bg-color);
}

.lineno {
	-webkit-touch-callout: none;
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-ms-user-select: none;
	user-select: none;
}

div.classindex ul {
        list-style: none;
        padding-left: 0;
}

div.classindex span.ai {
        display: inline-block;
}

div.groupHeader {
	margin-left: 16px;
	margin-top: 12px;
	font-weight: bold;
}

div.groupText {
	margin-left: 16px;
	font-style: italic;
}

body {
	color: var(--page-foreground-color);
        margin: 0;
}

div.contents {
	margin-top: 10px;
	margin-left: 12px;
	margin-right: 8px;
}

p.formulaDsp {
	text-align: center;
}

img.dark-mode-visible {
	display: none;
}
img.light-mode-visible {
	display: none;
}

img.formulaDsp {
	
}

img.formulaInl, img.inline {
	vertical-align: middle;
}

div.center {
	text-align: center;
        margin-top: 0px;
        margin-bottom: 0px;
        padding: 0px;
}

div.center img {
	border: 0px;
}

address.footer {
	text-align: right;
	padding-right: 12px;
}

img.footer {
	border: 0px;
	vertical-align: middle;
	width: var(--footer-logo-width);
}

.compoundTemplParams {
	color: var(--memdecl-template-color);
	font-size: 80%;
	line-height: 120%;
}

/* @group Code Colorization */

span.keyword {
	color: var(--code-keyword-color);
}

span.keywordtype {
	color: var(--code-type-keyword-color);
}

span.keywordflow {
	color: var(--code-flow-keyword-color);
}

span.comment {
	color: var(--code-comment-color);
}

span.preprocessor {
	color: var(--code-preprocessor-color);
}

span.stringliteral {
	color: var(--code-string-literal-color);
}

span.charliteral {
	color: var(--code-char-literal-color);
}

span.xmlcdata {
	color: var(--code-xml-cdata-color);
}

span.vhdldigit { 
	color: var(--code-vhdl-digit-color);
}

span.vhdlchar { 
	color: var(--code-vhdl-char-color);
}

span.vhdlkeyword { 
	color: var(--code-vhdl-keyword-color);
}

span.vhdllogic { 
	color: var(--code-vhdl-logic-color);
}

blockquote {
        background-color: var(--blockquote-background-color);
        border-left: 2px solid var(--blockquote-border-color);
        margin: 0 24px 0 4px;
        padding: 0 12px 0 16px;
}

/* @end */

td.tiny {
	font-size: 75%;
}

.dirtab {
	padding: 4px;
	border-collapse: collapse;
	border: 1px solid var(--table-cell-border-color);
}

th.dirtab {
	background-color: var(--table-header-background-color);
	color: var(--table-header-foreground-color);
	font-weight: bold;
}

hr {
	height: 0px;
	border: none;
	border-top: 1px solid var(--separator-color);
}

hr.footer {
	height: 1px;
}

/* @group Member Descriptions */

table.memberdecls {
	border-spacing: 0px;
	padding: 0px;
}

.memberdecls td, .fieldtable tr {
	-webkit-transition-property: background-color, box-shadow;
	-webkit-transition-duration: 0.5s;
	-moz-transition-property: background-color, box-shadow;
	-moz-transition-duration: 0.5s;
	-ms-transition-property: background-color, box-shadow;
	-ms-transition-duration: 0.5s;
	-o-transition-property: background-color, box-shadow;
	-o-transition-duration: 0.5s;
	transition-property: background-color, box-shadow;
	transition-duration: 0.5s;
}

.memberdecls td.glow, .fieldtable tr.glow {
	background-color: var(--glow-color);
	box-shadow: 0 0 15px var(--glow-color);
}

.mdescLeft, .mdescRight,
.memItemLeft, .memItemRight,
.memTemplItemLeft, .memTemplItemRight, .memTemplParams {
	background-color: var(--memdecl-background-color);
	border: none;
	margin: 4px;
	padding: 1px 0 0 8px;
}

.mdescLeft, .mdescRight {
	padding: 0px 8px 4px 8px;
	color: var(--memdecl-foreground-color);
}

.memSeparator {
        border-bottom: 1px solid var(--memdecl-separator-color);
        line-height: 1px;
        margin: 0px;
        padding: 0px;
}

.memItemLeft, .memTemplItemLeft {
        white-space: nowrap;
}

.memItemRight, .memTemplItemRight {
	width: 100%;
}

.memTemplParams {
	color: var(--memdecl-template-color);
        white-space: nowrap;
	font-size: 80%;
}

/* @end */

/* @group Member Details */

/* Styles for detailed member documentation */

.memtitle {
	padding: 8px;
	border-top: 1px solid var(--memdef-border-color);
	border-left: 1px solid var(--memdef-border-color);
	border-right: 1px solid var(--memdef-border-color);
	border-top-right-radius: 4px;
	border-top-left-radius: 4px;
	margin-bottom: -1px;
	background-image: var(--memdef-title-gradient-image);
	background-repeat: repeat-x;
	background-color: var(--memdef-title-background-color);
	line-height: 1.25;
	font-weight: 300;
	float:left;
}

.permalink
{
        font-size: 65%;
        display: inline-block;
        vertical-align: middle;
}

.memtemplate {
	font-size: 80%;
	color: var(--memdef-template-color);
	font-weight: normal;
	margin-left: 9px;
}

.mempage {
	width: 100%;
}

.memitem {
	padding: 0;
	margin-bottom: 10px;
	margin-right: 5px;
        -webkit-transition: box-shadow 0.5s linear;
        -moz-transition: box-shadow 0.5s linear;
        -ms-transition: box-shadow 0.5s linear;
        -o-transition: box-shadow 0.5s linear;
        transition: box-shadow 0.5s linear;
        display: table !important;
        width: 100%;
}

.memitem.glow {
         box-shadow: 0 0 15px var(--glow-color);
}

.memname {
        font-weight: 400;
        margin-left: 6px;
}

.memname td {
	vertical-align: bottom;
}

.memproto, dl.reflist dt {
        border-top: 1px solid var(--memdef-border-color);
        border-left: 1px solid var(--memdef-border-color);
        border-right: 1px solid var(--memdef-border-color);
        padding: 6px 0px 6px 0px;
        color: var(--memdef-proto-text-color);
        font-weight: bold;
        text-shadow: var(--memdef-proto-text-shadow);
        background-color: var(--memdef-proto-background-color);
        box-shadow: 5px 5px 5px rgba(0, 0, 0, 0.15);
        border-top-right-radius: 4px;
}

.overload {
        font-family: var(--font-family-monospace);
	font-size: 65%;
}

.memdoc, dl.reflist dd {
        border-bottom: 1px solid var(--memdef-border-color);
        border-left: 1px solid var(--memdef-border-color);
        border-right: 1px solid var(--memdef-border-color);
        padding: 6px 10px 2px 10px;
        border-top-width: 0;
        background-image:url('nav_g.png');
        background-repeat:repeat-x;
        background-color: var(--memdef-doc-background-color);
        /* opera specific markup */
        border-bottom-left-radius: 4px;
        border-bottom-right-radius: 4px;
        box-shadow: 5px 5px 5px rgba(0, 0, 0, 0.15);
        /* firefox specific markup */
        -moz-border-radius-bottomleft: 4px;
        -moz-border-radius-bottomright: 4px;
        -moz-box-shadow: rgba(0, 0, 0, 0.15) 5px 5px 5px;
        /* webkit specific markup */
        -webkit-border-bottom-left-radius: 4px;
        -webkit-border-bottom-right-radius: 4px;
        -webkit-box-shadow: 5px 5px 5px rgba(0, 0, 0, 0.15);
}

dl.reflist dt {
        padding: 5px;
}

dl.reflist dd {
        margin: 0px 0px 10px 0px;
        padding: 5px;
}

.paramkey {
	text-align: right;
}

.paramtype {
	white-space: nowrap;
}

.paramname {
	color: var(--memdef-param-name-color);
	white-space: nowrap;
}
.paramname em {
	font-style: normal;
}
.paramname code {
        line-height: 14px;
}

.params, .retval, .exception, .tparams {
        margin-left: 0px;
        padding-left: 0px;
}

.params .paramname, .retval .paramname, .tparams .paramname, .exception .paramname {
        font-weight: bold;
        vertical-align: top;
}

.params .paramtype, .tparams .paramtype {
        font-style: italic;
        vertical-align: top;
}

.params .paramdir, .tparams .paramdir {
        font-family: var(--font-family-monospace);
        vertical-align: top;
}

table.mlabels {
	border-spacing: 0px;
}

td.mlabels-left {
	width: 100%;
	padding: 0px;
}

td.mlabels-right {
	vertical-align: bottom;
	padding: 0px;
	white-space: nowrap;
}

span.mlabels {
        margin-left: 8px;
}

span.mlabel {
        background-color: var(--label-background-color);
        border-top:1px solid var(--label-left-top-border-color);
        border-left:1px solid var(--label-left-top-border-color);
        border-right:1px solid var(--label-right-bottom-border-color);
        border-bottom:1px solid var(--label-right-bottom-border-color);
	text-shadow: none;
	color: var(--label-foreground-color);
	margin-right: 4px;
	padding: 2px 3px;
	border-radius: 3px;
	font-size: 7pt;
	white-space: nowrap;
	vertical-align: middle;
}



/* @end */

/* these are for tree view inside a (index) page */

div.directory {
        margin: 10px 0px;
        border-top: 1px solid var(--directory-separator-color);
        border-bottom: 1px solid var(--directory-separator-color);
        width: 100%;
}

.directory table {
        border-collapse:collapse;
}

.directory td {
        margin: 0px;
        padding: 0px;
	vertical-align: top;
}

.directory td.entry {
        white-space: nowrap;
        padding-right: 6px;
	padding-top: 3px;
}

.directory td.entry a {
        outline:none;
}

.directory td.entry a img {
        border: none;
}

.directory td.desc {
        width: 100%;
        padding-left: 6px;
	padding-right: 6px;
	padding-top: 3px;
	border-left: 1px solid rgba(0,0,0,0.05);
}

.directory tr.odd {
	padding-left: 6px;
	background-color: var(--index-odd-item-bg-color);
}

.directory tr.even {
	padding-left: 6px;
	background-color: var(--index-even-item-bg-color);
}

.directory img {
	vertical-align: -30%;
}

.directory .levels {
        white-space: nowrap;
        width: 100%;
        text-align: right;
        font-size: 9pt;
}

.directory .levels span {
        cursor: pointer;
        padding-left: 2px;
        padding-right: 2px;
	color: var(--page-link-color);
}

.arrow {
    color: var(--nav-arrow-color);
    -webkit-user-select: none;
    -khtml-user-select: none;
    -moz-user-select: none;
    -ms-user-select: none;
    user-select: none;
    cursor: pointer;
    font-size: 80%;
    display: inline-block;
    width: 16px;
    height: 22px;
}

.icon {
    font-family: var(--font-family-icon);
    line-height: normal;
    font-weight: bold;
    font-size: 12px;
    height: 14px;
    width: 16px;
    display: inline-block;
    background-color: var(--icon-background-color);
    color: var(--icon-foreground-color);
    text-align: center;
    border-radius: 4px;
    margin-left: 2px;
    margin-right: 2px;
}

.icona {
    width: 24px;
    height: 22px;
    display: inline-block;
}

.iconfopen {
    width: 24px;
    height: 18px;
    margin-bottom: 4px;
    background-image:var(--icon-folder-open-image);
    background-repeat: repeat-y;
    vertical-align:top;
    display: inline-block;
}

.iconfclosed {
    width: 24px;
    height: 18px;
    margin-bottom: 4px;
    background-image:var(--icon-folder-closed-image);
    background-repeat: repeat-y;
    vertical-align:top;
    display: inline-block;
}

.icondoc {
    width: 24px;
    height: 18px;
    margin-bottom: 4px;
    background-image:var(--icon-doc-image);
    background-position: 0px -4px;
    background-repeat: repeat-y;
    vertical-align:top;
    display: inline-block;
}

/* @end */

div.dynheader {
        margin-top: 8px;
	-webkit-touch-callout: none;
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-ms-user-select: none;
	user-select: none;
}

address {
	font-style: normal;
	color: var(--footer-foreground-color);
}

table.doxtable caption {
	caption-side: top;
}

table.doxtable {
	border-collapse:collapse;
        margin-top: 4px;
        margin-bottom: 4px;
}

table.doxtable td, table.doxtable th {
	border: 1px solid var(--table-cell-border-color);
	padding: 3px 7px 2px;
}

table.doxtable th {
	background-color: var(--table-header-background-color);
	color: var(--table-header-foreground-color);
	font-size: 110%;
	padding-bottom: 4px;
	padding-top: 5px;
}

table.fieldtable {
        margin-bottom: 10px;
        border: 1px solid var(--memdef-border-color);
        border-spacing: 0px;
        border-radius: 4px;
        box-shadow: 2px 2px 2px rgba(0, 0, 0, 0.15);
}

.fieldtable td, .fieldtable th {
        padding: 3px 7px 2px;
}

.fieldtable td.fieldtype, .fieldtable td.fieldname {
        white-space: nowrap;
        border-right: 1px solid var(--memdef-border-color);
        border-bottom: 1px solid var(--memdef-border-color);
        vertical-align: top;
}

.fieldtable td.fieldname {
        padding-top: 3px;
}

.fieldtable td.fielddoc {
        border-bottom: 1px solid var(--memdef-border-color);
}

.fieldtable td.fielddoc p:first-child {
        margin-top: 0px;
}

.fieldtable td.fielddoc p:last-child {
        margin-bottom: 2px;
}

.fieldtable tr:last-child td {
        border-bottom: none;
}

.fieldtable th {
        background-image: var(--memdef-title-gradient-image);
        background-repeat:repeat-x;
        background-color: var(--memdef-title-background-color);
        font-size: 90%;
        color: var(--memdef-proto-text-color);
        padding-bottom: 4px;
        padding-top: 5px;
        text-align:left;
        font-weight: 400;
        border-top-left-radius: 4px;
        border-top-right-radius: 4px;
        border-bottom: 1px solid var(--memdef-border-color);
}


.tabsearch {
	top: 0px;
	left: 10px;
	height: 36px;
	background-image: var(--nav-gradient-image);
	z-index: 101;
	overflow: hidden;
	font-size: 13px;
}

.navpath ul
{
	font-size: 11px;
	background-image: var(--nav-gradient-image);
	background-repeat:repeat-x;
	background-position: 0 -5px;
	height:30px;
	line-height:30px;
	color:var(--nav-text-normal-color);
	border:solid 1px var(--nav-breadcrumb-border-color);
	overflow:hidden;
	margin:0px;
	padding:0px;
}

.navpath li
{
	list-style-type:none;
	float:left;
	padding-left:10px;
	padding-right:15px;
	background-image:var(--nav-breadcrumb-image);
	background-repeat:no-repeat;
	background-position:right;
	color: var(--nav-foreground-color);
}

.navpath li.navelem a
{
	height:32px;
	display:block;
	text-decoration: none;
	outline: none;
	color: var(--nav-text-normal-color);
	font-family: var(--font-family-nav);
	text-shadow: var(--nav-text-normal-shadow);
	text-decoration: none;
}

.navpath li.navelem a:hover
{
	color: var(--nav-text-hover-color);
	text-shadow: var(--nav-text-hover-shadow);
}

.navpath li.footer
{
        list-style-type:none;
        float:right;
        padding-left:10px;
        padding-right:15px;
        background-image:none;
        background-repeat:no-repeat;
        background-position:right;
        color: var(--footer-foreground-color);
        font-size: 8pt;
}


div.summary
{
	float: right;
	font-size: 8pt;
	padding-right: 5px;
	width: 50%;
	text-align: right;
}

div.summary a
{
	white-space: nowrap;
}

table.classindex
{
        margin: 10px;
        white-space: nowrap;
        margin-left: 3%;
        margin-right: 3%;
        width: 94%;
        border: 0;
        border-spacing: 0;
        padding: 0;
}

div.ingroups
{
	font-size: 8pt;
	width: 50%;
	text-align: left;
}

div.ingroups a
{
	white-space: nowrap;
}

div.header
{
        background-image: var(--header-gradient-image);
        background-repeat:repeat-x;
	background-color: var(--header-background-color);
	margin:  0px;
	border-bottom: 1px solid var(--header-separator-color);
}

div.headertitle
{
	padding: 5px 5px 5px 10px;
}

.PageDocRTL-title div.headertitle {
  text-align: right;
  direction: rtl;
}

dl {
        padding: 0 0 0 0;
}

/* dl.note, dl.warning, dl.attention, dl.pre, dl.post, dl.invariant, dl.deprecated, dl.todo, dl.test, dl.bug, dl.examples */
dl.section {
	margin-left: 0px;
	padding-left: 0px;
}

dl.note {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #D0C000;
}

dl.warning, dl.attention {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #FF0000;
}

dl.pre, dl.post, dl.invariant {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #00D000;
}

dl.deprecated {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #505050;
}

dl.todo {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #00C0E0;
}

dl.test {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #3030E0;
}

dl.bug {
  margin-left: -7px;
  padding-left: 3px;
  border-left: 4px solid;
  border-color: #C08050;
}

dl.section dd {
	margin-bottom: 6px;
}


#projectrow
{
	height: 56px;
}

#projectlogo
{
	text-align: center;
	vertical-align: bottom;
	border-collapse: separate;
}
 
#projectlogo img
{ 
	border: 0px none;
}
 
#projectalign
{
        vertical-align: middle;
        padding-left: 0.5em;
}

#projectname
{
	font-size: 200%;
	font-family: var(--font-family-title);
	margin: 0px;
	padding: 2px 0px;
}

#projectbrief
{
	font-size: 90%;
        font-family: var(--font-family-title);
	margin: 0px;
	padding: 0px;
}

#projectnumber
{
	font-size: 50%;
	font-family: 50% var(--font-family-title);
	margin: 0px;
	padding: 0px;
}

#titlearea
{
	padding: 0px;
	margin: 0px;
	width: 100%;
	border-bottom: 1px solid var(--title-separator-color);
	background-color: var(--title-background-color);
}

.image
{
        text-align: center;
}

.dotgraph
{
        text-align: center;
}

.mscgraph
{
        text-align: center;
}

.plantumlgraph
{
        text-align: center;
}

.diagraph
{
        text-align: center;
}

.caption
{
	font-weight: bold;
}

dl.citelist {
        margin-bottom:50px;
}

dl.citelist dt {
        color:var(--citation-label-color);
        float:left;
        font-weight:bold;
        margin-right:10px;
        padding:5px;
        text-align:right;
        width:52px;
}

dl.citelist dd {
        margin:2px 0 2px 72px;
        padding:5px 0;
}

div.toc {
        padding: 14px 25px;
        background-color: var(--toc-background-color);
        border: 1px solid var(--toc-border-color);
        border-radius: 7px 7px 7px 7px;
        float: right;
        height: auto;
        margin: 0 8px 10px 10px;
        width: 200px;
}

div.toc li {
        background: var(--toc-down-arrow-image) no-repeat scroll 0 5px transparent;
        font: 10px/1.2 var(--font-family-toc);
        margin-top: 5px;
        padding-left: 10px;
        padding-top: 2px;
}

div.toc h3 {
        font: bold 12px/1.2 var(--font-family-toc);
	color: var(--toc-header-color);
        border-bottom: 0 none;
        margin: 0;
}

div.toc ul {
        list-style: none outside none;
        border: medium none;
        padding: 0px;
}

div.toc li.level1 {
        margin-left: 0px;
}

div.toc li.level2 {
        margin-left: 15px;
}

div.toc li.level3 {
        margin-left: 15px;
}

div.toc li.level4 {
        margin-left: 15px;
}

span.emoji {
        /* font family used at the site: https://unicode.org/emoji/charts/full-emoji-list.html
         * font-family: "Noto Color Emoji", "Apple Color Emoji", "Segoe UI Emoji", Times, Symbola, Aegyptus, Code2000, Code2001, Code2002, Musica, serif, LastResort;
         */
}

span.obfuscator {
  display: none;
}

.inherit_header {
        font-weight: bold;
        color: var(--inherit-header-color);
        cursor: pointer;
	-webkit-touch-callout: none;
	-webkit-user-select: none;
	-khtml-user-select: none;
	-moz-user-select: none;
	-ms-user-select: none;
	user-select: none;
}

.inherit_header td {
        padding: 6px 0px 2px 5px;
}

.inherit {
        display: none;
}

tr.heading h2 {
        margin-top: 12px;
        margin-bottom: 4px;
}

/* tooltip related style info */

.ttc {
        position: absolute;
        display: none;
}

#powerTip {
	cursor: default;
	/*white-space: nowrap;*/
        color: var(--tooltip-foreground-color);
	background-color: var(--tooltip-background-color);
	border: 1px solid var(--tooltip-border-color);
	border-radius: 4px 4px 4px 4px;
	box-shadow: var(--tooltip-shadow);
	display: none;
	font-size: smaller;
	max-width: 80%;
	opacity: 0.9;
	padding: 1ex 1em 1em;
	position: absolute;
	z-index: 2147483647;
}

#powerTip div.ttdoc {
        color: var(--tooltip-doc-color);
	font-style: italic;
}

#powerTip div.ttname a {
        font-weight: bold;
}

#powerTip a {
	color: var(--tooltip-link-color);
}

#powerTip div.ttname {
        font-weight: bold;
}

#powerTip div.ttdeci {
        color: var(--tooltip-declaration-color);
}

#powerTip div {
        margin: 0px;
        padding: 0px;
        font-size: 12px;
       	font-family: var(--font-family-tooltip);
	line-height: 16px;
}

#powerTip:before, #powerTip:after {
	content: "";
	position: absolute;
	margin: 0px;
}

#powerTip.n:after,  #powerTip.n:before,
#powerTip.s:after,  #powerTip.s:before,
#powerTip.w:after,  #powerTip.w:before,
#powerTip.e:after,  #powerTip.e:before,
#powerTip.ne:after, #powerTip.ne:before,
#powerTip.se:after, #powerTip.se:before,
#powerTip.nw:after, #powerTip.nw:before,
#powerTip.sw:after, #powerTip.sw:before {
	border: solid transparent;
	content: " ";
	height: 0;
	width: 0;
	position: absolute;
}

#powerTip.n:after,  #powerTip.s:after,
#powerTip.w:after,  #powerTip.e:after,
#powerTip.nw:after, #powerTip.ne:after,
#powerTip.sw:after, #powerTip.se:after {
	border-color: rgba(255, 255, 255, 0);
}

#powerTip.n:before,  #powerTip.s:before,
#powerTip.w:before,  #powerTip.e:before,
#powerTip.nw:before, #powerTip.ne:before,
#powerTip.sw:before, #powerTip.se:before {
	border-color: rgba(128, 128, 128, 0);
}

#powerTip.n:after,  #powerTip.n:before,
#powerTip.ne:after, #powerTip.ne:before,
#powerTip.nw:after, #powerTip.nw:before {
	top: 100%;
}

#powerTip.n:after, #powerTip.ne:after, #powerTip.nw:after {
	border-top-color: var(--tooltip-background-color);
	border-width: 10px;
	margin: 0px -10px;
}
#powerTip.n:before, #powerTip.ne:before, #powerTip.nw:before {
	border-top-color: var(--tooltip-border-color);
	border-width: 11px;
	margin: 0px -11px;
}
#powerTip.n:after, #powerTip.n:before {
	left: 50%;
}

#powerTip.nw:after, #powerTip.nw:before {
	right: 14px;
}

#powerTip.ne:after, #powerTip.ne:before {
	left: 14px;
}

#powerTip.s:after,  #powerTip.s:before,
#powerTip.se:after, #powerTip.se:before,
#powerTip.sw:after, #powerTip.sw:before {
	bottom: 100%;
}

#powerTip.s:after, #powerTip.se:after, #powerTip.sw:after {
	border-bottom-color: var(--tooltip-background-color);
	border-width: 10px;
	margin: 0px -10px;
}

#powerTip.s:before, #powerTip.se:before, #powerTip.sw:before {
	border-bottom-color: var(--tooltip-border-color);
	border-width: 11px;
	margin: 0px -11px;
}

#powerTip.s:after, #powerTip.s:before {
	left: 50%;
}

#powerTip.sw:after, #powerTip.sw:before {
	right: 14px;
}

#powerTip.se:after, #powerTip.se:before {
	left: 14px;
}

#powerTip.e:after, #powerTip.e:before {
	left: 100%;
}
#powerTip.e:after {
	border-left-color: var(--tooltip-border-color);
	border-width: 10px;
	top: 50%;
	margin-top: -10px;
}
#powerTip.e:before {
	border-left-color: var(--tooltip-border-color);
	border-width: 11px;
	top: 50%;
	margin-top: -11px;
}

#powerTip.w:after, #powerTip.w:before {
	right: 100%;
}
#powerTip.w:after {
	border-right-color: var(--tooltip-border-color);
	border-width: 10px;
	top: 50%;
	margin-top: -10px;
}
#powerTip.w:before {
	border-right-color: var(--tooltip-border-color);
	border-width: 11px;
	top: 50%;
	margin-top: -11px;
}

@media print
{
  #top { display: none; }
  #side-nav { display: none; }
  #nav-path { display: none; }
  body { overflow:visible; }
  h1, h2, h3, h4, h5, h6 { page-break-after: avoid; }
  .summary { display: none; }
  .memitem { page-break-inside: avoid; }
  #doc-content
  {
    margin-left:0 !important;
    height:auto !important;
    width:auto !important;
    overflow:inherit;
    display:inline;
  }
}

/* @group Markdown */

table.markdownTable {
	border-collapse:collapse;
        margin-top: 4px;
        margin-bottom: 4px;
}

table.markdownTable td, table.markdownTable th {
	border: 1px solid var(--table-cell-border-color);
	padding: 3px 7px 2px;
}

table.markdownTable tr {
}

th.markdownTableHeadLeft, th.markdownTableHeadRight, th.markdownTableHeadCenter, th.markdownTableHeadNone {
	background-color: var(--table-header-background-color);
	color: var(--table-header-foreground-color);
	font-size: 110%;
	padding-bottom: 4px;
	padding-top: 5px;
}

th.markdownTableHeadLeft, td.markdownTableBodyLeft {
	text-align: left
}

th.markdownTableHeadRight, td.markdownTableBodyRight {
	text-align: right
}

th.markdownTableHeadCenter, td.markdownTableBodyCenter {
	text-align: center
}

tt, code, kbd, samp
{
  display: inline-block;
}
/* @end */

u {
	text-decoration: underline;
}

details>summary {
  list-style-type: none;
}

details > summary::-webkit-details-marker {
    display: none;
}

details>summary::before {
    content: "\25ba";
    padding-right:4px;
    font-size: 80%;
}

details[open]>summary::before {
    content: "\25bc";
    padding-right:4px;
    font-size: 80%;
}

body {
    scrollbar-color: var(--scrollbar-thumb-color) var(--scrollbar-background-color);
}

::-webkit-scrollbar {
        background-color: var(--scrollbar-background-color);
        height: 12px;
        width: 12px;
}
::-webkit-scrollbar-thumb {
        border-radius: 6px;
        box-shadow: inset 0 0 12px 12px var(--scrollbar-thumb-color);
        border: solid 2px transparent;
}
::-webkit-scrollbar-corner {
        background-color: var(--scrollbar-background-color);
}

