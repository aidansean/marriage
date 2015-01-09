from project_module import project_object, image_object, link_object, challenge_object

p = project_object('marriage', 'Marriage data')
p.domain = 'http://www.aidansean.com/'
p.path = 'marriage'
p.preview_image_ = image_object('http://placekitten.com.s3.amazonaws.com/homepage-samples/408/287.jpg', 408, 287)
p.github_repo_name = 'marriage'
p.mathjax = True
p.links.append(link_object(p.domain, 'marriage', 'Live page'))
p.links.append(link_object('http://en.wikipedia.org/', 'w/index.php?title=Age_at_first_marriage&oldid=573979725', 'Wikipedia page'))

p.introduction = 'This project was the first step in a larger project that scrubbed data from pages for analysis.'
p.overview = '''This page takes input from Wikipedia (although at the moment this is extracted manually from the main page) and then produces a C script which summarises the data for further analysis.  ROOT is then used to make a plot showing the data.  The idea behind the project was to make data scrubbing easier and to give me practice in data scrubbing.  If I ever get sufficient time I intend to create some resources to make data scrubbing easier and make sharing of publically accessible data simpler.  The the data are taken from an outdated <a href="http://en.wikipedia.org/w/index.php?title=Age_at_first_marriage&oldid=573979725">Wikiepdia page</a> which is missing many sources.'''

p.challenges.append(challenge_object('The data needs to be scrubbed from the page easily.', 'To save time I manually copied the data from Wikipedia for offline analysis, but this should be fixed to read the data online.', 'Resolved, to be revisited'))

p.challenges.append(challenge_object('The output needs to be some kind of source file, for example C or python.', 'The source file I chose was a ROOT macro for convenience.  Ideally the user should be able to choose what output they want (including xml) to best suit their needs.', 'Resolved, to be revisited'))
