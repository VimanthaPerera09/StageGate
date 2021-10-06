pipeline {
    agent any
    stages {
        stage("Build") {
            sh('''make main''')
            sh('''./main''')
        }

    }

}