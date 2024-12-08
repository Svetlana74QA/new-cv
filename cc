* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f4;
    color: #333;
}

.main-header {
    text-align: center;
    padding: 50px 20px;
    background-color: #3498db;
    color: white;
}

.main-header h1 {
    margin-bottom: 10px;
}

.about-me .container {
    display: flex;
    justify-content: center;
    align-items: center;
    max-width: 800px;
    margin: 40px auto;
    padding: 30px;
    background-color: white;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

.profile-image {
    width: 100px;
    height: 100px;
    object-fit: cover;
    border-radius: 50%;
    margin-right: 30px;
}

.info {
    flex-grow: 1;
}

.info a {
    display: inline-block;
    background-color: #3498db;
    color: white;
    padding: 15px 12px;
    text-decoration: none;
    transition: background-color 0.3s ease;
}

.info a:hover {
    background-color: #2980b9;
}

.services {
    max-width: 600px;
    margin: 40px auto;
    padding: 30px;
    background-color: white;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

.services ul {
    list-style-type: none;
    padding-left: 0;
}

.services li {
    margin-bottom: 10px;
}

footer {
    text-align: center;
    padding: 20px;
    background-color: #e74c3c;
    color: white;
}

footer address {
    line-height: 1.6;
}
