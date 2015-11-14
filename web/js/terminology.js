
function createTermDef(term, definition) {
	var termDef = document.createElement("div");
	termDef.className = "row collapse text-center term-def-wrap";
	termDef.setAttribute("data-equalizer", "");

	var termDiv = document.createElement("div");
	termDiv.className = "large-4 medium-4 columns text-center term";
	termDiv.innerHTML = "<span>" + term + "</span>";
	termDiv.setAttribute("data-equalizer-watch", "");

	var defDiv = document.createElement("div");
	defDiv.className = "large-8 medium-8 columns def";
	defDiv.innerHTML = "<p>" + definition + "</p>";
	defDiv.setAttribute("data-equalizer-watch", "");

	termDef.appendChild(termDiv);
	termDef.appendChild(defDiv);
	return termDef;
}

(function() {
	var x = new XMLHttpRequest();
	x.open("POST", "/terminology/get_terms.cgi", true);
	x.onreadystatechange = function() {
		if (x.status == 200 && x.readyState == 4) {
			var lines = x.responseText.split("\n");
			for (var i = 0; i < lines.length; i++) {
				var line = lines[i];
				if (line) {
					var data = line.split("::");
					termsContainer.appendChild(createTermDef(data[0], data[1]));
				}
			}
			$(document).foundation();
		}
	};
	x.send();
})();

